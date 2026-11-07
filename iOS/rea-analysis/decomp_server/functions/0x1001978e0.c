// rea decompile_all
// name: FUN_1001978e0
// address: 0x1001978e0
// body: available
// range: 0x1001978e0-0x100197aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001978e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 local_98 [6];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x44);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0x1000000000000024,0x8000000100899690);
  _swift_beginAccess(param_2,&local_68,0,0);
  uVar1 = *param_2;
  uVar3 = param_2[1];
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x44496b636f6c622d,0xe90000000000003a);
  _swift_beginAccess(param_2,auStack_80,0,0);
  local_98[0] = *(undefined4 *)(param_2 + 2);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000011,0x80000001008996c0);
  _swift_beginAccess(param_2,local_98,0,0);
  lVar2 = param_2[3];
  uVar4 = (uint)((ulong)param_2[4] >> 0x20);
  uVar7 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if ((uVar7 != 0) && (SBORROW4((int)((ulong)lVar2 >> 0x20),(int)lVar2))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100197aac);
      (*pcVar5)();
    }
  }
  else if ((uVar7 == 2) && (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100197a3c);
    (*pcVar5)();
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

