// rea decompile_all
// name: FUN_10012b654
// address: 0x10012b654
// body: available
// range: 0x10012b654-0x10012b9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10012b654(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar2 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar2 = NSWorkspace::frontmostApplication(IVar2,"frontmostApplication");
  if (IVar2 != 0) {
    pcVar6 = "bundleIdentifier";
    puVar3 = (undefined1 *)NSWorkspace::bundleIdentifier(IVar2,"bundleIdentifier");
    if (puVar3 != (undefined1 *)0x0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (puVar3 == &DAT_d000000000000010 && pcVar6 == (char *)0x800000010088e9f0) {
        _swift_bridgeObjectRelease(pcVar6);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (puVar3,pcVar6,&DAT_d000000000000010,0x800000010088e9f0,0);
        _swift_bridgeObjectRelease(pcVar6);
        if (((ulong)puVar3 & 1) == 0) goto LAB_10012b7d4;
      }
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar4 = 1;
      FUN_1000b35b4();
      if ((uVar4 & 1) == 0) {
        FUN_100401b14(0);
        FUN_1003fb48c(FUN_10012b5e4,0,0xd000000000000095,0x800000010088e950,0x29286574736170,
                      0xe700000000000000,0x33,0);
        __s10Foundation4DateVACycfC(&stack0xffffffffffffffa0 + lVar5);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (**(code **)(lVar7 + 8))(&stack0xffffffffffffffa0 + lVar5,lVar1);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)((long)&uStack_80 + lVar5) = 9;
        auStack_78[lVar5] = 0;
        *(undefined8 *)((long)auStack_70 + lVar5) = 0x100000;
        *(undefined8 *)((long)auStack_70 + lVar5 + 8) = param_1;
        FUN_1003fb45c(FUN_1000b659c,auStack_90 + lVar5,0xd000000000000092,0x8000000100882970,
                      0xd000000000000015,0x8000000100882a10,0x338,0);
        lVar5 = 0;
        _CGEventCreateKeyboardEvent(0,9,1);
        if (lVar5 == 0) {
          return;
        }
        _CGEventSetFlags();
        _CGEventPost(0,lVar5);
        lVar5 = 0;
        _CGEventCreateKeyboardEvent(0,9,0);
        if (lVar5 == 0) {
          return;
        }
        _CGEventSetFlags();
        _CGEventPost(0,lVar5);
        return;
      }
    }
  }
LAB_10012b7d4:
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_10012b5b8,0,0xd000000000000095,0x800000010088e950,0x29286574736170,
                0xe700000000000000,0x30,0);
  return;
}

