// rea decompile_all
// name: FUN_1001c7a04
// address: 0x1001c7a04
// body: available
// range: 0x1001c7a04-0x1001c7c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c7a04(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  int iStack_ac;
  ulong local_a8;
  undefined1 *local_a0;
  uint local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar5 = auStack_78;
  _swift_beginAccess(param_4 + 0x10,puVar5,0,0);
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 != 0) {
    iVar7 = (int)param_2;
    if ((param_3 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a0 = (undefined1 *)CONCAT44(iVar7,(int)param_1);
      FUN_1003fb48c(FUN_1001cbdf0,&local_b0,0xd000000000000095,0x8000000100885070,0xd000000000000019
                    ,0x800000010089d2e0,100,0);
      FUN_1001cb3c4(param_5,param_1,param_2);
    }
    else {
      uVar1 = iVar7 - 0x80;
      uVar8 = (ulong)uVar1;
      if (SBORROW4(iVar7,0x80)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001c7c78);
        (*pcVar4)();
      }
      FUN_1001cae30();
      local_90 = (undefined4)param_5;
      local_88 = 0;
      local_80 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1a);
      _swift_bridgeObjectRelease(local_80);
      local_88 = 0xd000000000000014;
      local_80 = 0x800000010089d580;
      __sSS6appendyySSF(uVar8,puVar5);
      __sSS6appendyySSF(0x28,0xe100000000000000);
      puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
      local_8c = uVar1;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      uVar3 = local_80;
      uVar2 = local_88;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_b0 = (int)param_1;
      iStack_ac = iVar7;
      local_a8 = uVar8;
      local_a0 = puVar5;
      local_98 = uVar1;
      FUN_1003fb4ec(FUN_1001cbdf8,auStack_c0,0xd000000000000095,0x8000000100885070,
                    0xd000000000000019,0x800000010089d2e0,0x61,0);
      _swift_bridgeObjectRelease(puVar5);
      FUN_1001cafdc(local_90,param_1,0x44c,uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar3);
    }
    _swift_release(param_4);
  }
  return;
}

