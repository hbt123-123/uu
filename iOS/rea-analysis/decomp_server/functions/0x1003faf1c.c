// rea decompile_all
// name: FUN_1003faf1c
// address: 0x1003faf1c
// body: available
// range: 0x1003faf1c-0x1003fb287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003fb200) */
/* WARNING: Removing unreachable block (ram,0x0001003fb07c) */
/* WARNING: Removing unreachable block (ram,0x0001003fb20c) */

long FUN_1003faf1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
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
  
  puVar2 = &DAT_100a8df08;
  FUN_100004bb4(&DAT_100a8df08,&DAT_1008247b8);
  local_128 = *(long *)(puVar2 + -8);
  local_118 = puVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  local_110 = *(undefined8 **)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar5);
  FUN_1003fae90();
  local_120 = (long)&local_140 - extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_140 - extraout_x8,&DAT_1009bc3a0,&DAT_1009bc3a0,lVar3,uVar5,local_110);
  puVar2 = local_118;
  lVar1 = local_120;
  lVar3 = local_128;
  if (unaff_x21 == 0) {
    local_80[0] = 0;
    puVar4 = local_80;
    puVar6 = local_118;
    local_140 = (undefined8 *)(unaff_x20 + 0x60);
    local_138 = (undefined8 *)(unaff_x20 + 0x50);
    local_130 = (undefined8 *)(unaff_x20 + 0x20);
    local_110 = (undefined8 *)(unaff_x20 + 0x40);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x10),local_80,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
    *(undefined **)(unaff_x20 + 0x18) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_98[0] = 1;
    puVar4 = local_98;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x30),local_98,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined1 **)(unaff_x20 + 0x30) = puVar4;
    *(undefined **)(unaff_x20 + 0x38) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_b0[0] = 2;
    puVar4 = local_b0;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess(local_110,local_b0,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined1 **)(unaff_x20 + 0x40) = puVar4;
    *(undefined **)(unaff_x20 + 0x48) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_c8[0] = 3;
    puVar4 = local_c8;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess(local_130,local_c8,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined1 **)(unaff_x20 + 0x20) = puVar4;
    *(undefined **)(unaff_x20 + 0x28) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_e0[0] = 4;
    puVar4 = local_e0;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess(local_138,local_e0,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined1 **)(unaff_x20 + 0x50) = puVar4;
    *(undefined **)(unaff_x20 + 0x58) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_f8[0] = 5;
    puVar4 = local_f8;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar3 + 8))(lVar1,puVar2);
    _swift_beginAccess(local_140,local_f8,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined1 **)(unaff_x20 + 0x60) = puVar4;
    *(undefined **)(unaff_x20 + 0x68) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
  }
  else {
    _swift_release(unaff_x20);
  }
  FUN_10003f094(param_1);
  return unaff_x20;
}

