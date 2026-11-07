// rea decompile_all
// name: FUN_10007711c
// address: 0x10007711c
// body: available
// range: 0x10007711c-0x1000772e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100077258) */

undefined1  [16] FUN_10007711c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [32];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar10 = auStack_f0 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  lVar14 = *(long *)(lVar1 + -8);
  uVar9 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)puVar10 - uVar9;
  lVar13 = lVar12 - uVar9;
  uStack_78 = param_1[9];
  local_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  local_60 = param_1[0xc];
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uVar2 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  __s10Foundation11JSONEncoderC16OutputFormattingV13prettyPrintedAEvgZ(lVar13);
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj(lVar13);
  __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ(lVar12);
  pcVar3 = (code *)auStack_e0;
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvMTj();
  FUN_100076f28(lVar13,lVar12);
  pcVar11 = *(code **)(lVar14 + 8);
  (*pcVar11)(lVar12,lVar1);
  (*pcVar11)(lVar13,lVar1);
  puVar4 = auStack_e0;
  (*pcVar3)(puVar4,0);
  FUN_100077dd0();
  puVar7 = &DAT_1000fb788;
  puVar5 = &local_c0;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar5,&DAT_1000fb788,puVar4);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar10);
  puVar6 = puVar5;
  puVar8 = puVar7;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar5,puVar7,puVar10);
  if (puVar8 == (undefined *)0x0) {
    FUN_100020a0c(puVar5,puVar7);
    _swift_release(uVar2);
    puVar6 = (undefined8 *)0x0;
    puVar8 = (undefined *)0xe000000000000000;
  }
  else {
    FUN_100020a0c(puVar5,puVar7);
    _swift_release(uVar2);
  }
  auVar15._8_8_ = puVar8;
  auVar15._0_8_ = puVar6;
  return auVar15;
}

