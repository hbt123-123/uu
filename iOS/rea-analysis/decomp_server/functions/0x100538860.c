// rea decompile_all
// name: FUN_100538860
// address: 0x100538860
// body: available
// range: 0x100538860-0x100538a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100538860(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong local_98;
  undefined8 *puStack_90;
  undefined1 *local_70;
  ulong uStack_68;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar5 = &stack0xffffffffffffff40 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    lVar2 = lVar1;
    local_98 = param_2;
    puStack_90 = param_3;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
    FUN_1004f9a5c();
    uVar4 = 0;
    puVar3 = puVar5;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar5,0,PTR___sSSN_1009957f8,lVar2);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
    _swift_bridgeObjectRelease();
    if (uVar4 >> 0x3c < 0xf) {
      local_70 = puVar3;
      uStack_68 = uVar4;
      FUN_1004f9894(param_4,&local_98);
      FUN_100008184(puVar3,uVar4);
      FUN_1005386f8(param_1,&local_70,&local_98,param_5,param_6 & 1,param_7,
                    PTR___s10Foundation4DataVN_1009961e8,param_8,&PTR_PTR_1009d16b0);
      FUN_100040bb4(param_4,&DAT_100aaa0e8,&DAT_1008358c0);
      FUN_100006cc8(puVar3,uVar4);
      return;
    }
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_3,0,0);
  param_3[1] = 0xd;
  *param_3 = 0;
  _swift_willThrow();
  FUN_100040bb4(param_4,&DAT_100aaa0e8,&DAT_1008358c0);
  return;
}

