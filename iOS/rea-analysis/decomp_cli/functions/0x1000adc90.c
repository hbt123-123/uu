// rea decompile_all
// name: FUN_1000adc90
// address: 0x1000adc90
// body: available
// range: 0x1000adc90-0x1000adf83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000adf24) */

undefined1  [16]
FUN_1000adc90(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 **param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pppuVar10 = *(undefined8 ****)(param_1 + 0x10);
  if (pppuVar10 == (undefined8 ***)0x0) {
    _swift_bridgeObjectRetain(param_1);
    pppuVar6 = (undefined8 ***)PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    pppuVar6 = pppuVar10;
    FUN_100079728(pppuVar10,0);
    pppuVar7 = &local_88;
    FUN_10008e0d4(pppuVar7,pppuVar6 + 4,pppuVar10,param_1);
    uVar4 = local_68;
    uVar3 = uStack_70;
    uVar2 = local_78;
    uVar8 = local_80;
    _swift_bridgeObjectRetain_n(param_1,2);
    FUN_10008f124(local_88,uVar8,uVar2,uVar3,uVar4);
    if (pppuVar7 != pppuVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000adf24);
      (*pcVar5)();
    }
    param_4 = param_4 & 0xffffffff;
  }
  local_88 = pppuVar6;
  _swift_retain(pppuVar6);
  FUN_1000afe18(&local_88);
  _swift_release(pppuVar6);
  ppuVar9 = (undefined8 **)local_88[2];
  _swift_release();
  if (ppuVar9 == (undefined8 **)0x0) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000027,0x80000001000cae00,
               "ArgumentParser/InputOrigin.swift",0x20,2,0x44,0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000adf84);
    (*pcVar5)();
  }
  pppuVar10 = *(undefined8 ****)(param_1 + 0x10);
  if (pppuVar10 == (undefined8 ***)0x0) {
    _swift_bridgeObjectRelease(param_1);
    pppuVar6 = (undefined8 ***)PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    pppuVar6 = pppuVar10;
    FUN_100079728(pppuVar10,0);
    pppuVar7 = &local_88;
    FUN_10008e0d4(pppuVar7,pppuVar6 + 4,pppuVar10,param_1);
    FUN_10008f124(local_88,local_80,local_78,uStack_70,local_68);
    if (pppuVar7 != pppuVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000adde4);
      (*pcVar5)();
    }
  }
  local_88 = pppuVar6;
  _swift_retain(pppuVar6);
  FUN_1000afe18(&local_88);
  _swift_release(pppuVar6);
  ppuVar9 = (undefined8 **)local_88[2];
  _swift_release();
  if (ppuVar9 == (undefined8 **)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000adf20);
    (*pcVar5)();
  }
  ppuVar9 = param_5;
  uVar8 = param_6;
  FUN_1000b1064(param_5,param_6,param_7);
  FUN_1000b1a38(param_2,param_3,param_4);
  local_88 = (undefined8 **)0x0;
  local_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x14);
  _swift_bridgeObjectRelease(local_80);
  local_88 = ppuVar9;
  local_80 = uVar8;
  __sSS6appendyySSF(0x203a726f2020200a,0xe800000000000000);
  __sSS6appendyySSF(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0x27206e6920,0xe500000000000000);
  FUN_1000979e4(param_5,param_6,param_7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_6);
  __sSS6appendyySSF(0x27,0xe100000000000000);
  auVar1._8_8_ = local_80;
  auVar1._0_8_ = local_88;
  return auVar1;
}

