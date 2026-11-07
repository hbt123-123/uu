// rea decompile_all
// name: FUN_1003d8548
// address: 0x1003d8548
// body: available
// range: 0x1003d8548-0x1003d87f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d876c) */

void FUN_1003d8548(undefined8 param_1,undefined *param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  long extraout_x8;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined auStack_a0 [8];
  undefined *local_98;
  ulong uStack_90;
  
  lVar11 = *unaff_x20;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_3 >> 0x3c < 0xf) {
    uVar6 = param_3;
    FUN_100008184(param_2);
    puVar2 = &DAT_100a89490;
    FUN_1003d81bc();
    puVar3 = &DAT_100a894c8;
    local_98 = puVar2;
    uStack_90 = uVar6;
    FUN_1003d81bc();
    puVar2 = puVar3;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
    FUN_10009ff0c();
    uVar7 = 1;
    puVar4 = puVar5;
    puVar9 = PTR___sSSN_1009957f8;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar5,1,PTR___sSSN_1009957f8,puVar2);
    uVar10 = (uint)puVar2;
    (**(code **)(lVar12 + 8))(puVar5,lVar1);
    if (uVar7 >> 0x3c < 0xf) {
      puVar3 = puVar4;
      FUN_100665cbc(puVar4,uVar7);
      FUN_100006cc8(puVar4,uVar7);
    }
    else {
      _swift_bridgeObjectRetain(uVar6);
      uVar7 = uVar6;
      FUN_10039c910(puVar3,uVar6);
      _swift_bridgeObjectRelease(uVar6);
    }
    _swift_bridgeObjectRelease(uVar6);
    FUN_1006357a4(puVar3);
    uVar6 = uStack_90;
    puVar5 = local_98;
    uVar8 = uStack_90;
    FUN_10039c9dc(local_98,uStack_90,puVar3,uVar7,puVar9,uVar10 & 1,param_2,param_3);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar7);
    if (0xe < uVar8 >> 0x3c) {
      FUN_100008184(param_2,param_3);
      puVar5 = param_2;
      uVar8 = param_3;
    }
    lVar1 = *(long *)(lVar11 + 0x138);
    __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
              (param_1,lVar1,puVar5,uVar8,lVar1,*(undefined8 *)(lVar11 + 0x140));
    FUN_100006cc8(param_2,param_3);
    FUN_100006cdc(puVar5,uVar8);
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,0,1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003d85f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(lVar11 + 0x138) + -8) + 0x38))(param_1,1,1);
  return;
}

