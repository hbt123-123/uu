// rea decompile_all
// name: MMKV::tryAutoCleanUpInstances
// address: 0x10037a018
// body: available
// range: 0x10037a018-0x10037a2ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void MMKV::tryAutoCleanUpInstances(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ID self;
  ID IVar4;
  dispatch_time_t start;
  dispatch_source_t source;
  uint64_t interval;
  int iVar5;
  double extraout_d0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ulong local_70;
  long local_68;
  
  local_68 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  NSDate::timeIntervalSinceReferenceDate((ID)&_OBJC_CLASS___NSDate);
  puVar3 = DAT_100ad13b8;
  puVar1 = DAT_100ad13b0;
  do {
    while( true ) {
      puVar2 = DAT_100ad13b0;
      if (DAT_100ad13b0 == DAT_100ad13b8) goto LAB_10037a1b8;
      self = objc_stub::objectForKey_(DAT_100ad1388,*DAT_100ad13b0);
      if (self != 0) break;
      FUN_100386734(1,"libMMKV.mm","+[MMKV tryAutoCleanUpInstances]",0x346,
                    "ignore already closed mmkv [%@]");
LAB_10037a1a0:
      FUN_10037a31c(&DAT_100ad13b0);
    }
    iVar5 = (int)*(undefined8 *)(self + 0x18);
    FUN_100382530();
    if (iVar5 == 0) goto LAB_10037a1a0;
    if (((ulong)(long)(extraout_d0 * 1000.0) < *(long *)(self + 0x20) + (ulong)DAT_100ad13d0) ||
       (IVar4 = objc_stub::retainCount(self), IVar4 != 1)) {
      FUN_100386734(1,"libMMKV.mm","+[MMKV tryAutoCleanUpInstances]",0x33f,
                    "ignore auto cleanup mmkv [%@], m_lastAccessTime: %llu");
      FUN_100382528(*(undefined8 *)(self + 0x18));
      goto LAB_10037a1a0;
    }
    _objc_autoreleasePoolPush();
    FUN_100386734(1,"libMMKV.mm","+[MMKV tryAutoCleanUpInstances]",0x335,
                  "auto cleanup mmkv [%@], m_time: %llu");
    objc_stub::removeObjectForKey_(DAT_100ad1388,*puVar2);
    FUN_10037a31c(&DAT_100ad13b0);
    iVar5 = 3;
    if (DAT_100ad13b0 != DAT_100ad13b8) {
      iVar5 = 1;
    }
    _objc_autoreleasePoolPop(IVar4);
  } while (iVar5 == 0);
  if (iVar5 == 3) {
LAB_10037a1b8:
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0xc0000000;
    local_80 = FUN_10037a418;
    puStack_78 = &DAT_1009b5a18;
    local_70 = (long)(extraout_d0 * 1000.0);
    objc_stub::enumerateKeysAndObjectsUsingBlock_(DAT_100ad1388,&local_90);
    if (DAT_100ad13d8 != (dispatch_source_t)0x0) {
      if (puVar1 == puVar3) {
        if (DAT_100ad13b0 == DAT_100ad13b8) goto LAB_10037a2d8;
        FUN_100386734(1,"libMMKV.mm","+[MMKV tryAutoCleanUpInstances]",0x355,
                      "switch to do-cleanup phase with faster duration");
        source = DAT_100ad13d8;
        start = _dispatch_time(0,2000000000);
        interval = 2000000000;
      }
      else {
        if (DAT_100ad13b0 != DAT_100ad13b8) goto LAB_10037a2d8;
        FUN_100386734(1,"libMMKV.mm","+[MMKV tryAutoCleanUpInstances]",0x35b,
                      "switch back to check-cleanup phase with longer duration");
        source = DAT_100ad13d8;
        start = _dispatch_time(0,(ulong)DAT_100ad13d0 * 1000000);
        interval = (ulong)DAT_100ad13d0 * 1000000;
      }
      _dispatch_source_set_timer(source,start,interval,60000000000);
    }
  }
LAB_10037a2d8:
  FUN_10037b92c(&local_68);
  return;
}

