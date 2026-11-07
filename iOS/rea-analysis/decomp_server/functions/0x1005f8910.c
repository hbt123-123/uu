// rea decompile_all
// name: FUN_1005f8910
// address: 0x1005f8910
// body: available
// range: 0x1005f8910-0x1005f8db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f8b50) */
/* WARNING: Removing unreachable block (ram,0x0001005f8d34) */
/* WARNING: Removing unreachable block (ram,0x0001005f8d44) */
/* WARNING: Removing unreachable block (ram,0x0001005f8d48) */

void FUN_1005f8910(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 local_51;
  
  puVar4 = &DAT_100aaf848;
  FUN_100004bb4(&DAT_100aaf848,&DAT_100846e18);
  local_b0 = *(long *)(puVar4 + -8);
  local_b8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_d0 + -extraout_x8;
  puVar4 = &DAT_100aaf850;
  local_98 = puVar11;
  FUN_100004bb4(&DAT_100aaf850,&DAT_100846e20);
  local_a8 = *(long *)(puVar4 + -8);
  local_c0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaf858;
  local_a0 = puVar11 + -extraout_x8_00;
  FUN_100004bb4(&DAT_100aaf858,&DAT_100846e28);
  lVar17 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(puVar11 + -extraout_x8_00) - extraout_x8_01;
  puVar5 = &DAT_100aaf860;
  FUN_100004bb4(&DAT_100aaf860,&DAT_100846e30);
  lVar15 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar14 - extraout_x8_02;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1005f86fc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar16,&DAT_1009dcba0,&DAT_1009dcba0,lVar8,uVar1,uVar2);
  puVar9 = local_98;
  puVar11 = local_a0;
  if (unaff_x21 == 0) {
    puVar6 = puVar5;
    local_c8 = lVar17;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    uVar13 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    FUN_1005fc86c();
    if ((((uint)puVar7 & 0xff) != 3) && ((uVar13 & 0x7fffffffffffffff) == 0)) {
      if (((ulong)puVar7 & 0xff) == 0) {
        local_51 = 0;
        FUN_1005f87bc();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar14,&DAT_1009dcc30,&local_51,puVar5,&DAT_1009dcc30,puVar7);
        __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF();
        (**(code **)(local_c8 + 8))(lVar14,puVar4);
        (**(code **)(lVar15 + 8))(lVar16,puVar5);
        _swift_unknownObjectRelease(puVar6);
      }
      else {
        if (((uint)puVar7 & 0xff) == 1) {
          local_51 = SUB81(puVar7,0);
          FUN_1005f877c();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (puVar11,&DAT_1009dccc0,&local_51,puVar5,&DAT_1009dccc0,puVar7);
          puVar4 = local_c0;
          __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF();
          pcVar12 = *(code **)(local_a8 + 8);
          puVar9 = puVar11;
        }
        else {
          local_51 = 2;
          FUN_1005f873c();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (puVar9,&DAT_1009dcd50,&local_51,puVar5,&DAT_1009dcd50,puVar7);
          puVar4 = local_b8;
          __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF();
          pcVar12 = *(code **)(local_b0 + 8);
        }
        (*pcVar12)(puVar9,puVar4);
        (**(code **)(lVar15 + 8))(lVar16,puVar5);
        _swift_unknownObjectRelease(puVar6);
      }
      FUN_10003f094(param_1);
      return;
    }
    lVar8 = 0;
    __ss13DecodingErrorOMa();
    puVar10 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar4 = &DAT_100aaeca0;
    FUN_100004bb4(&DAT_100aaeca0,&DAT_100844fc0);
    iVar3 = *(int *)(puVar4 + 0x30);
    *puVar10 = &DAT_1009dc358;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar5);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar10 + (long)iVar3);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar10,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               lVar8);
    _swift_willThrow();
    (**(code **)(lVar15 + 8))(lVar16,puVar5);
    _swift_unknownObjectRelease(puVar6);
  }
  FUN_10003f094(param_1);
  return;
}

