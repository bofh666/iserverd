  ������ ����� �������� ���� ICQ Groupware server, ����������
����������� ����� (AVShutko@mail.khstu.ru) �� ����������.

  �� ������� ������ �������������� ��������� V3, V5 � V7.
����� �������������� WWP ���������. 

  ��� ��������� ������� ���������� ���������� ������ postgresql �
postgresql-server.

������(���������) ������� ������������ ����� ������� (�� root):
    /etc/rc.d/init.d/iserverd start
    /etc/rc.d/init.d/iserverd stop

����������������� ������ ������� ����� �������� ���������
(�� root ��� ������������� ������ iserverd)
    /usr/bin/server_status

�������, �������, ��������� ��� ������������ ���� �����
��������� ������ (�� postgres) db_manage.sh:
    /usr/bin/db_manage.sh create <DB_NAME>
    /usr/bin/db_manage.sh drop <DB_NAME>
    /usr/bin/db_manage.sh dump <DB_NAME> <TEMPFILE>
    /usr/bin/db_manage.sh restore <DB_NAME> <TEMPFILE>

��������� ���� �������� ���� ������, ���������� ��� ���������� ������ 
�������� � ���� (�� postgres)
    /usr/bin/convert_db.sh

�������� ��� ������� ������������ (�� iserverd):
   /etc/iserverd/db/icquser add <UIN>
   /etc/iserverd/db/icquser del <UIN>

����� �������� ����� ������������ � ���� (�� iserverd):
   /etc/iserverd/db/icquser search <UIN>

Andy Shevchenko <andriy@asplinux.ru>
ASPLinux Developers Team.

