// rea decompile_all
// name: FUN_1005f7dd0
// address: 0x1005f7dd0
// body: available
// range: 0x1005f7dd0-0x1005f821f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f7fe4) */
/* WARNING: Removing unreachable block (ram,0x0001005f8190) */
/* WARNING: Removing unreachable block (ram,0x0001005f8194) */
/* WARNING: Removing unreachable block (ram,0x0001005f7f88) */
/* WARNING: Removing unreachable block (ram,0x0001005f819c) */

long FUN_1005f7dd0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined4 *puVar7;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  undefined8 *local_130;
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  
  puVar2 = &DAT_100aaf160;
  FUN_100004bb4(&DAT_100aaf160,&BYTE_1008450c0);
  local_148 = *(long *)(puVar2 + -8);
  local_140 = puVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar7 = (undefined4 *)(unaff_x20 + 0x10);
  *puVar7 = 0;
  local_150 = (undefined8 *)(unaff_x20 + 0x18);
  *local_150 = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  local_130 = *(undefined8 **)(param_2 + 0x20);
  lVar3 = param_2;
  FUN_10003f030(param_2,uVar5);
  FUN_1005fa440();
  local_138 = (long)&local_160 - extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_160 - extraout_x8,&DAT_1009dc690,&DAT_1009dc690,lVar3,uVar5,local_130);
  puVar2 = local_140;
  lVar3 = local_148;
  puVar1 = local_150;
  if (unaff_x21 == 0) {
    local_80[0] = 0;
    puVar4 = local_80;
    local_160 = (undefined8 *)(unaff_x20 + 0x68);
    local_158 = (undefined8 *)(unaff_x20 + 0x48);
    local_130 = (undefined8 *)(unaff_x20 + 0x38);
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF(puVar4,local_140);
    _swift_beginAccess(puVar7,local_80,1,0);
    *puVar7 = (int)puVar4;
    local_98[0] = 1;
    puVar4 = local_98;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess(puVar1,local_98,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined1 **)(unaff_x20 + 0x18) = puVar4;
    *(undefined **)(unaff_x20 + 0x20) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_b0[0] = 2;
    puVar4 = local_b0;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x28),local_b0,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined1 **)(unaff_x20 + 0x28) = puVar4;
    *(undefined **)(unaff_x20 + 0x30) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_c8[0] = 3;
    puVar4 = local_c8;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess(local_130,local_c8,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined1 **)(unaff_x20 + 0x38) = puVar4;
    *(undefined **)(unaff_x20 + 0x40) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_e0[0] = 4;
    puVar4 = local_e0;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess(local_158,local_e0,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined1 **)(unaff_x20 + 0x48) = puVar4;
    *(undefined **)(unaff_x20 + 0x50) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_f8[0] = 5;
    puVar4 = local_f8;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x58),local_f8,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined1 **)(unaff_x20 + 0x58) = puVar4;
    *(undefined **)(unaff_x20 + 0x60) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    local_110[0] = 6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(local_110,puVar2);
    (**(code **)(lVar3 + 8))(local_138,puVar2);
    puVar1 = local_160;
    _swift_beginAccess(local_160,local_110,1,0);
    *puVar1 = param_1;
  }
  else {
    _swift_release(unaff_x20);
  }
  FUN_10003f094(param_2);
  return unaff_x20;
}

