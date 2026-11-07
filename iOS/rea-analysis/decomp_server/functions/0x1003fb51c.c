// rea decompile_all
// name: FUN_1003fb51c
// address: 0x1003fb51c
// body: available
// range: 0x1003fb51c-0x1003fb757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fb51c(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8,
                  undefined4 *param_9,undefined8 param_10)

{
  long lVar1;
  ID self;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  ID IVar6;
  char *pcVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  char *pcVar10;
  long alStack_c0 [2];
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  ID local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = 0;
  local_78 = param_6;
  local_70 = param_5;
  local_68 = param_7;
  FUN_1005cac3c();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + lVar1;
  (**(code **)(lVar9 + 0x68))(puVar8,*param_9,lVar4);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar2 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar5 = puVar8;
    FUN_1005cc2b8();
    if (((ulong)puVar5 & 1) == 0) {
      _swift_release(lVar2);
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
      pcVar7 = "lastPathComponent";
      IVar6 = _objc_msgSend(param_3,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      pcVar10 = pcVar7;
      local_88 = IVar6;
      local_80 = puVar8;
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(undefined8 *)((long)auStack_a0 + lVar1) = param_1;
      *(undefined8 *)((long)auStack_a0 + lVar1 + 8) = param_2;
      if ((param_8 & 0xff) == 0) {
        pcVar10 = (char *)0xe800000000000000;
        param_8 = 0x65746f6d65525555;
      }
      else {
        FUN_1003fb758(param_8);
      }
      if (local_68 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fb740);
        (*pcVar3)();
      }
      *(long *)((long)alStack_c0 + lVar1 + 8) = local_68;
      *(undefined8 *)((long)alStack_c0 + lVar1) = local_78;
      FUN_1005cc010(param_10,auStack_b0 + lVar1,puVar8,param_8,pcVar10,local_88,pcVar7,local_70);
      _swift_release(lVar2);
      _swift_bridgeObjectRelease(pcVar7);
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(self,"unlock");
  (**(code **)(lVar9 + 8))(puVar8,lVar4);
  return;
}

