// rea decompile_all
// name: FUN_10018df50
// address: 0x10018df50
// body: available
// range: 0x10018df50-0x10018e1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018df50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ID self;
  ID IVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined1 local_79;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + lVar1;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    local_98 = param_5;
    local_90 = lVar6;
    local_88 = lVar2;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)auStack_c0 + lVar1) = param_2;
    *(undefined8 *)((long)auStack_c0 + lVar1 + 8) = param_3;
    *(undefined8 *)((long)auStack_c0 + lVar1 + 0x10) = param_4;
    FUN_1003fb45c(FUN_1001913bc,auStack_d0 + lVar1,0xd0000000000000ad,0x8000000100890a70,
                  0xd000000000000026,0x8000000100898920,0xcf,7);
    __s10Foundation3URLV22appendingPathComponentyACSSF(puVar7,param_3,param_4);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined1 **)((long)auStack_c0 + lVar1 + 0x10) = puVar7;
    FUN_1003fb45c(FUN_1001913c8,(long)auStack_c0 + lVar1,0xd0000000000000ad,0x8000000100890a70,
                  0xd000000000000026,0x8000000100898920,0xd1,7);
    pcVar5 = "defaultManager";
    self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar3 = self;
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar5);
    IVar3 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar3);
    if (((IVar3 & 1) == 0) && (puVar4 = puVar7, FUN_100191bb0(), ((ulong)puVar4 & 1) == 0)) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined1 **)((long)auStack_c0 + lVar1 + 0x10) = puVar7;
      FUN_1003fb45c(FUN_100191e28,(long)auStack_c0 + lVar1,0xd0000000000000ad,0x8000000100890a70,
                    0xd000000000000026,0x8000000100898920,0xd4,7);
      local_79 = 0;
    }
    else {
      local_79 = 1;
    }
    FUN_10061630c(&local_79);
    _swift_release(param_1);
    (**(code **)(local_90 + 8))(puVar7,local_88);
  }
  return;
}

