// rea decompile_all
// name: FUN_1005dbb74
// address: 0x1005dbb74
// body: available
// range: 0x1005dbb74-0x1005dbddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005dbcb8) */

void FUN_1005dbb74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_140 [15];
  undefined1 local_131;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_e1;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = &DAT_100aae128;
  FUN_100004bb4(&DAT_100aae128,&DAT_10083f718);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005dd7a0();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_140 + -extraout_x8,&DAT_1009d9b48,&DAT_1009d9b48,param_1,uVar1,uVar2);
  local_e0 = local_e0 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(*unaff_x20,&local_e0,puVar3);
  if (unaff_x21 == 0) {
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 8);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
    local_90 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
    local_70 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x10);
    local_e0 = *(ulong *)(unaff_x20 + 8);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x30);
    local_c0 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x40);
    local_b0 = *(undefined8 *)(unaff_x20 + 0x38);
    local_e1 = 1;
    puVar4 = &uStack_a0;
    FUN_1005dd6e0(puVar4,&local_130);
    FUN_1005dd7e0();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_e0,&local_e1,puVar3,&DAT_1009d9728,puVar4);
    uStack_128 = uStack_d8;
    local_130 = local_e0;
    uStack_118 = uStack_c8;
    local_120 = uStack_d0;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = local_b0;
    FUN_100040bb4(&local_130,&DAT_100aae120,&DAT_10083f710);
    local_131 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + 0x48),&local_131,puVar3);
    local_131 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),&local_131,puVar3
              );
    local_131 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),&local_131,puVar3
              );
  }
  (**(code **)(lVar5 + 8))(auStack_140 + -extraout_x8,puVar3);
  return;
}

