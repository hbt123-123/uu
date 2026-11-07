// rea decompile_all
// name: FUN_1003f3ed0
// address: 0x1003f3ed0
// body: available
// range: 0x1003f3ed0-0x1003f4223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f408c) */
/* WARNING: Removing unreachable block (ram,0x0001003f40c8) */
/* WARNING: Removing unreachable block (ram,0x0001003f3fd8) */
/* WARNING: Removing unreachable block (ram,0x0001003f41c4) */

long FUN_1003f3ed0(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  undefined1 local_c0 [24];
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  
  puVar3 = &DAT_100a8d5e0;
  FUN_100004bb4(&DAT_100a8d5e0,&DAT_100823898);
  lVar10 = *(long *)(puVar3 + -8);
  local_d8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  puVar9 = (undefined1 *)(unaff_x20 + 0x13);
  *puVar9 = 2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined2 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x22) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_1003f3e04();
  local_e0 = auStack_f0 + -extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_f0 + -extraout_x8,&DAT_1009bbbc0,&DAT_1009bbbc0,lVar4,uVar6,uVar1);
  puVar3 = local_d8;
  puVar2 = local_e0;
  if (unaff_x21 == 0) {
    local_78[0] = 0;
    puVar5 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,local_d8);
    *(byte *)(unaff_x20 + 0x10) = (byte)puVar5 & 1;
    local_78[0] = 1;
    puVar5 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    *(byte *)(unaff_x20 + 0x11) = (byte)puVar5 & 1;
    local_78[0] = 2;
    puVar5 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    *(byte *)(unaff_x20 + 0x12) = (byte)puVar5 & 1;
    local_78[0] = 3;
    puVar7 = local_78;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,puVar3);
    puVar5 = puVar9;
    local_e8 = lVar10;
    _swift_beginAccess(puVar9,local_78,1,0);
    *puVar9 = (char)puVar7;
    local_90[0] = 4;
    FUN_1003f4244();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_a8,&DAT_1009bba98,local_90,puVar3,&DAT_1009bba98,puVar5);
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x18),local_90,1,0);
    *(ulong *)(unaff_x20 + 0x18) = CONCAT71(uStack_a7,local_a8);
    *(undefined2 *)(unaff_x20 + 0x20) = local_a0;
    *(undefined1 *)(unaff_x20 + 0x22) = local_9e;
    local_a8 = 5;
    puVar9 = &local_a8;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x28),&local_a8,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined1 **)(unaff_x20 + 0x28) = puVar9;
    *(undefined **)(unaff_x20 + 0x30) = puVar8;
    _swift_bridgeObjectRelease(uVar6);
    local_c0[0] = 6;
    puVar9 = local_c0;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(local_e8 + 8))(puVar2,puVar3);
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x38),local_c0,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined1 **)(unaff_x20 + 0x38) = puVar9;
    *(undefined **)(unaff_x20 + 0x40) = puVar8;
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_bridgeObjectRelease(uVar6);
    FUN_1003f4224();
    _swift_deallocPartialClassInstance(unaff_x20,uVar6,0x48,7);
  }
  FUN_10003f094(param_1);
  return unaff_x20;
}

