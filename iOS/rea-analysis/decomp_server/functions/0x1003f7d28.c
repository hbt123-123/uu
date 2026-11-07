// rea decompile_all
// name: FUN_1003f7d28
// address: 0x1003f7d28
// body: available
// range: 0x1003f7d28-0x1003f7f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f7ed4) */

long FUN_1003f7d28(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  
  puVar3 = &DAT_100a8db08;
  FUN_100004bb4(&DAT_100a8db08,&DAT_100824028);
  lVar8 = *(long *)(puVar3 + -8);
  local_b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_1003f7c9c();
  local_c0 = auStack_d0 + -extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_d0 + -extraout_x8,&DAT_1009bbfc0,&DAT_1009bbfc0,lVar4,uVar6,uVar1);
  puVar3 = local_b8;
  puVar2 = local_c0;
  if (unaff_x21 == 0) {
    local_78[0] = 0;
    puVar5 = local_78;
    puVar7 = local_b8;
    local_c8 = (undefined8 *)(unaff_x20 + 0x30);
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x10),local_78,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar5;
    *(undefined **)(unaff_x20 + 0x18) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_90[0] = 1;
    puVar5 = local_90;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x20),local_90,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined1 **)(unaff_x20 + 0x20) = puVar5;
    *(undefined **)(unaff_x20 + 0x28) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_a8[0] = 2;
    puVar5 = local_a8;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar8 + 8))(puVar2,puVar3);
    _swift_beginAccess(local_c8,local_a8,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined1 **)(unaff_x20 + 0x30) = puVar5;
    *(undefined **)(unaff_x20 + 0x38) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    _swift_release();
  }
  FUN_10003f094(param_1);
  return unaff_x20;
}

