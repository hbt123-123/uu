// rea decompile_all
// name: FUN_100539ecc
// address: 0x100539ecc
// body: available
// range: 0x100539ecc-0x10053a043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 **
FUN_100539ecc(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             undefined8 **param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *apuStack_80 [3];
  ulong uStack_68;
  
  puVar1 = (undefined8 *)0x0;
  apuStack_80[1] = (undefined8 *)param_7;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = puVar1[-1];
  puVar4 = (undefined8 *)((long)apuStack_80 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  uVar6 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar6 = param_2 >> 0x38 & 0xf;
  }
  if (uVar6 != 0) {
    puVar2 = puVar1;
    apuStack_80[2] = (undefined8 *)param_1;
    uStack_68 = param_2;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
    FUN_1004f9a5c();
    uVar6 = 0;
    puVar3 = puVar4;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar4,0,PTR___sSSN_1009957f8,puVar2);
    (**(code **)(lVar7 + 8))(puVar4,puVar1);
    puVar1 = puVar4;
    if (uVar6 >> 0x3c < 0xf) {
      ppuVar5 = apuStack_80 + 2;
      apuStack_80[2] = puVar3;
      uStack_68 = uVar6;
      FUN_10053a044(ppuVar5,param_3,param_4,param_5 & 1,param_6,PTR___s10Foundation4DataVN_1009961e8
                    ,apuStack_80[1],&PTR_PTR_1009d16b0);
      FUN_100006cc8(puVar3,uVar6);
      return ppuVar5;
    }
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,puVar1,0,0);
  puVar1[1] = 0xd;
  *puVar1 = 0;
  _swift_willThrow();
  return param_6;
}

