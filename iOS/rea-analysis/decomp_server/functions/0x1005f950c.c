// rea decompile_all
// name: FUN_1005f950c
// address: 0x1005f950c
// body: available
// range: 0x1005f950c-0x1005f9867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f9824) */

void FUN_1005f950c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  undefined1 local_51;
  
  puVar5 = &DAT_100aaf800;
  FUN_100004bb4(&DAT_100aaf800,&DAT_100846de8);
  local_90 = *(long *)(puVar5 + -8);
  local_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaf808;
  local_98 = (long)&local_c0 - extraout_x8;
  FUN_100004bb4(&DAT_100aaf808,&DAT_100846df0);
  lVar12 = *(long *)(puVar5 + -8);
  local_a8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = ((long)&local_c0 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100aaf810;
  FUN_100004bb4(&DAT_100aaf810,&DAT_100846df8);
  lVar14 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar15 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1005f944c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar13,&DAT_1009dc900,&DAT_1009dc900,lVar8,uVar1,uVar2);
  lVar4 = local_90;
  lVar8 = local_98;
  if (unaff_x21 == 0) {
    puVar6 = puVar5;
    local_c0 = lVar12;
    local_b8 = lVar15;
    local_b0 = param_1;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    uVar11 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    thunk_FUN_1005fc8a0();
    if ((((uint)puVar7 & 0xff) != 2) && ((uVar11 & 0x7fffffffffffffff) == 0)) {
      if (((ulong)puVar7 & 1) == 0) {
        local_51 = 0;
        FUN_1005f94cc();
        lVar8 = local_b8;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (local_b8,&DAT_1009dc920,&local_51,puVar5,&DAT_1009dc920,puVar7);
        pcVar10 = *(code **)(local_c0 + 8);
        puVar7 = local_a8;
      }
      else {
        local_51 = 1;
        FUN_1005f948c();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar8,&DAT_1009dc940,&local_51,puVar5,&DAT_1009dc940,puVar7);
        pcVar10 = *(code **)(lVar4 + 8);
        puVar7 = local_a0;
      }
      (*pcVar10)(lVar8,puVar7);
      (**(code **)(lVar14 + 8))(lVar13,puVar5);
      _swift_unknownObjectRelease(puVar6);
      FUN_10003f094(local_b0);
      return;
    }
    lVar8 = 0;
    __ss13DecodingErrorOMa();
    puVar9 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar7 = &DAT_100aaeca0;
    FUN_100004bb4(&DAT_100aaeca0,&DAT_100844fc0);
    iVar3 = *(int *)(puVar7 + 0x30);
    *puVar9 = &DAT_1009dc570;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar5);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar9 + (long)iVar3);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               lVar8);
    _swift_willThrow();
    (**(code **)(lVar14 + 8))(lVar13,puVar5);
    _swift_unknownObjectRelease(puVar6);
    param_1 = local_b0;
  }
  FUN_10003f094(param_1);
  return;
}

