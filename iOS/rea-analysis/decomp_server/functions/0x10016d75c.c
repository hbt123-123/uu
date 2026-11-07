// rea decompile_all
// name: FUN_10016d75c
// address: 0x10016d75c
// body: available
// range: 0x10016d75c-0x10016da8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010016da10) */

undefined * FUN_10016d75c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar10;
  long lVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar5 = &DAT_100a7b050;
  FUN_100004bb4(&DAT_100a7b050,&DAT_10080f718);
  local_88 = *(long *)(puVar5 + -8);
  local_78 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a7b058;
  local_70 = (long)&local_90 - extraout_x8;
  FUN_100004bb4(&DAT_100a7b058,&DAT_10080f720);
  lVar12 = *(long *)(puVar5 + -8);
  local_80 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100a7b060;
  FUN_100004bb4(&DAT_100a7b060,&DAT_10080f728);
  lVar14 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar11 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_10016d178();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar13,&DAT_1009a0360,&DAT_1009a0360,lVar7,uVar1,uVar2);
  lVar7 = local_70;
  if (unaff_x21 == 0) {
    puVar6 = puVar5;
    local_90 = param_1;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    if ((*(long *)(puVar6 + 0x10) != 0) && (*(long *)(puVar6 + 0x10) == 1)) {
      bVar3 = puVar6[0x20];
      if ((bVar3 & 1) == 0) {
        local_52 = 0;
        puVar8 = puVar6;
        FUN_10016d1f8();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar11,&DAT_1009a0380,&local_52,puVar5,&DAT_1009a0380,puVar8);
        pcVar10 = *(code **)(lVar12 + 8);
        puVar8 = local_80;
      }
      else {
        local_51 = 1;
        puVar8 = puVar6;
        FUN_10016d1b8();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar7,&DAT_1009a03a0,&local_51,puVar5,&DAT_1009a03a0,puVar8);
        pcVar10 = *(code **)(local_88 + 8);
        lVar11 = lVar7;
        puVar8 = local_78;
      }
      (*pcVar10)(lVar11,puVar8);
      (**(code **)(lVar14 + 8))(lVar13,puVar5);
      _swift_unknownObjectRelease(puVar6);
      FUN_10003f094(local_90);
      return (undefined *)(ulong)bVar3;
    }
    lVar7 = 0;
    __ss13DecodingErrorOMa();
    puVar9 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar8 = &DAT_100a7b068;
    FUN_100004bb4(&DAT_100a7b068,&DAT_10080f730);
    iVar4 = *(int *)(puVar8 + 0x30);
    *puVar9 = &DAT_1009a0000;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar5);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar9 + (long)iVar4);
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               lVar7);
    _swift_willThrow();
    (**(code **)(lVar14 + 8))(lVar13,puVar5);
    _swift_unknownObjectRelease(puVar6);
    param_1 = local_90;
  }
  FUN_10003f094(param_1);
  return puVar5;
}

