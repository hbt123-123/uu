// rea decompile_all
// name: FUN_1005f2144
// address: 0x1005f2144
// body: available
// range: 0x1005f2144-0x1005f25af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f2338) */
/* WARNING: Removing unreachable block (ram,0x0001005f234c) */
/* WARNING: Removing unreachable block (ram,0x0001005f2544) */
/* WARNING: Removing unreachable block (ram,0x0001005f248c) */

undefined1 * FUN_1005f2144(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_81;
  undefined *local_80;
  undefined *puStack_78;
  ulong local_70;
  ulong uStack_68;
  undefined1 local_58 [8];
  
  puVar5 = &DAT_100aaef70;
  FUN_100004bb4(&DAT_100aaef70,&DAT_100844fa8);
  local_a8 = *(long *)(puVar5 + -8);
  local_b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaef78;
  local_a0 = (long)&local_b0 - extraout_x8;
  FUN_100004bb4(&DAT_100aaef78,&DAT_100844fb0);
  puVar13 = *(undefined1 **)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(puVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_b0 - extraout_x8) - extraout_x8_00;
  puVar6 = &DAT_100aaef80;
  FUN_100004bb4(&DAT_100aaef80,&DAT_100844fb8);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1005f1bbc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,&DAT_1009dbf20,&DAT_1009dbf20,lVar8,uVar1,uVar2);
  lVar8 = local_a0;
  if (unaff_x21 == 0) {
    puVar7 = puVar6;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    puStack_78 = puVar7 + 0x20;
    uStack_68 = *(long *)(puVar7 + 0x10) << 1 | 1;
    local_70 = 0;
    local_80 = puVar7;
    thunk_FUN_1005fc8a0();
    if ((((uint)puVar7 & 0xff) != 2) && (local_70 == uStack_68 >> 1)) {
      if (((ulong)puVar7 & 1) == 0) {
        local_58[0] = 0;
        FUN_1005f1c3c();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar10,&DAT_1009dbf40,local_58,puVar6,&DAT_1009dbf40,puVar7);
        (**(code **)(puVar13 + 8))(lVar10,puVar5);
        (**(code **)(lVar12 + 8))(lVar11,puVar6);
        _swift_unknownObjectRelease(local_80);
        puVar13 = (undefined1 *)0x0;
      }
      else {
        local_58[0] = 1;
        FUN_1005f1bfc();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar8,&DAT_1009dbfd0,local_58,puVar6,&DAT_1009dbfd0,puVar7);
        puVar4 = local_b0;
        local_58[0] = 0;
        puVar13 = local_58;
        __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar13,local_b0);
        puVar5 = &DAT_100aae0a0;
        FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
        local_81 = 1;
        puVar7 = &DAT_100aae0d0;
        FUN_1005da960(&DAT_100aae0d0,PTR___sSSSesWP_100995828,PTR___sSayxGSesSeRzlMc_1009958a0);
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                  (local_58,puVar5,&local_81,puVar4,puVar5,puVar7);
        (**(code **)(local_a8 + 8))(lVar8,puVar4);
        (**(code **)(lVar12 + 8))(lVar11,puVar6);
        _swift_unknownObjectRelease(local_80);
      }
      FUN_10003f094(param_1);
      return puVar13;
    }
    lVar8 = 0;
    __ss13DecodingErrorOMa();
    puVar9 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar5 = &DAT_100aaeca0;
    FUN_100004bb4(&DAT_100aaeca0,&DAT_100844fc0);
    iVar3 = *(int *)(puVar5 + 0x30);
    *puVar9 = &DAT_1009dbd70;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar6);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar9 + (long)iVar3);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               lVar8);
    _swift_willThrow();
    (**(code **)(lVar12 + 8))(lVar11,puVar6);
    _swift_unknownObjectRelease(local_80);
  }
  FUN_10003f094(param_1);
  return puVar13;
}

