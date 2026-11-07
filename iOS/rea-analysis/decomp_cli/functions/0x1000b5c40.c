// rea decompile_all
// name: FUN_1000b5c40
// address: 0x1000b5c40
// body: available
// range: 0x1000b5c40-0x1000b5dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b5c40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar3 = &DAT_100105180;
  FUN_10000eb08(&DAT_100105180,&BYTE_1000d6e38);
  lVar5 = *(long *)(puVar3 + -8);
  lVar4 = (long)&local_130 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_1000bb51c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar4,&DAT_1000fc0a0,&DAT_1000fc0a0,param_1,uVar1,uVar2);
  local_130 = local_130 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(*unaff_x20,&local_130,puVar3);
  if (unaff_x21 == 0) {
    uStack_98 = unaff_x20[6];
    local_a0 = unaff_x20[5];
    uStack_88 = unaff_x20[8];
    uStack_90 = unaff_x20[7];
    uStack_78 = unaff_x20[10];
    local_80 = unaff_x20[9];
    uStack_68 = unaff_x20[0xc];
    uStack_70 = unaff_x20[0xb];
    uStack_b8 = unaff_x20[2];
    local_c0 = unaff_x20[1];
    uStack_a8 = unaff_x20[4];
    uStack_b0 = unaff_x20[3];
    local_51 = 1;
    FUN_1000bb55c();
    FUN_1000bb56c();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_c0,&local_51,puVar3,&DAT_1000fb808,unaff_x20);
    uStack_108 = uStack_98;
    local_110 = local_a0;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    uStack_d8 = uStack_68;
    uStack_e0 = uStack_70;
    uStack_128 = uStack_b8;
    local_130 = local_c0;
    uStack_118 = uStack_a8;
    local_120 = uStack_b0;
    FUN_1000bb5ac(&local_130);
  }
  (**(code **)(lVar5 + 8))(lVar4,puVar3);
  return;
}

