// rea decompile_all
// name: FUN_100665168
// address: 0x100665168
// body: available
// range: 0x100665168-0x10066537f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100665168(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined *local_a0;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_70;
  undefined **ppuStack_68;
  
  lVar1 = 0;
  local_a0 = param_3;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar5 = (undefined *)((long)&local_a0 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = lVar1;
  local_88 = param_1;
  uStack_80 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
  FUN_100665380();
  uVar6 = 1;
  puVar3 = puVar5;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar5,1,PTR___sSSN_1009957f8,lVar2);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(puVar5,lVar1);
  if (uVar6 >> 0x3c < 0xf) {
    param_1 = puVar3;
    FUN_100665cbc(puVar3,uVar6);
    FUN_100006cc8(puVar3,uVar6);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006653c0(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  _swift_bridgeObjectRelease(param_2);
  puVar3 = local_a0;
  local_88 = local_a0;
  uStack_80 = param_4;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
  uVar6 = 1;
  puVar4 = puVar5;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar5,1,PTR___sSSN_1009957f8,lVar2);
  (*pcVar8)(puVar5,lVar1);
  if (uVar6 >> 0x3c < 0xf) {
    puVar3 = puVar4;
    FUN_100665cbc(puVar4,uVar6);
    FUN_100006cc8(puVar4,uVar6);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_1006653c0(puVar3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  _swift_bridgeObjectRelease(param_4);
  local_70 = &DAT_1009e1d88;
  ppuStack_68 = &PTR_PTR_1009e1d00;
  puVar5 = &DAT_1009e4800;
  _swift_allocObject(&DAT_1009e4800,0x29,7);
  *(undefined8 *)(puVar5 + 0x10) = 6;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  puVar5[0x28] = 1;
  local_88 = puVar5;
  _swift_allocObject(unaff_x20,0xa0,7);
  FUN_10062c4d8(param_1,&local_88,param_5);
  return;
}

