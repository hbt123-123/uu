// rea decompile_all
// name: FUN_10022a8f4
// address: 0x10022a8f4
// body: available
// range: 0x10022a8f4-0x10022ac6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010022abec) */
/* WARNING: Removing unreachable block (ram,0x00010022aa68) */
/* WARNING: Removing unreachable block (ram,0x00010022abf8) */

long FUN_10022a8f4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined8 *local_110;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  
  puVar3 = &DAT_100a7ed68;
  FUN_100004bb4(&DAT_100a7ed68,&DAT_100813928);
  local_128 = *(long *)(puVar3 + -8);
  local_118 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0x1e;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_110 = *(undefined8 **)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_10022ac6c();
  local_120 = (long)&local_140 - extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_140 - extraout_x8,&DAT_1009a62c0,&DAT_1009a62c0,lVar4,uVar6,local_110);
  puVar3 = local_118;
  lVar2 = local_120;
  lVar4 = local_128;
  if (unaff_x21 == 0) {
    local_80[0] = 0;
    puVar5 = local_80;
    puVar7 = local_118;
    local_140 = (undefined8 *)(unaff_x20 + 0x60);
    local_138 = (undefined8 *)(unaff_x20 + 0x50);
    local_130 = (undefined8 *)(unaff_x20 + 0x40);
    local_110 = (undefined8 *)(unaff_x20 + 0x30);
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x10),local_80,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar5;
    *(undefined **)(unaff_x20 + 0x18) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_98[0] = 1;
    puVar5 = local_98;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x20),local_98,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined1 **)(unaff_x20 + 0x20) = puVar5;
    *(undefined **)(unaff_x20 + 0x28) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_b0[0] = 2;
    puVar5 = local_b0;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess(local_110,local_b0,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined1 **)(unaff_x20 + 0x30) = puVar5;
    *(undefined **)(unaff_x20 + 0x38) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_c8[0] = 3;
    puVar5 = local_c8;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess(local_130,local_c8,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined1 **)(unaff_x20 + 0x40) = puVar5;
    *(undefined **)(unaff_x20 + 0x48) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_e0[0] = 4;
    puVar5 = local_e0;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess(local_138,local_e0,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined1 **)(unaff_x20 + 0x50) = puVar5;
    *(undefined **)(unaff_x20 + 0x58) = puVar7;
    _swift_bridgeObjectRelease(uVar6);
    local_f8[0] = 5;
    puVar5 = local_f8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar5,puVar3);
    (**(code **)(lVar4 + 8))(lVar2,puVar3);
    puVar1 = local_140;
    _swift_beginAccess(local_140,local_f8,1,0);
    *puVar1 = puVar5;
  }
  else {
    _swift_release(unaff_x20);
  }
  FUN_10003f094(param_1);
  return unaff_x20;
}

