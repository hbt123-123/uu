// rea decompile_all
// name: FUN_1003b4a3c
// address: 0x1003b4a3c
// body: available
// range: 0x1003b4a3c-0x1003b4c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b4a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  long extraout_x8;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar7;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined7 uStack_f8;
  undefined4 local_f1;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined7 uStack_b8;
  undefined4 uStack_b1;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8bd60;
  FUN_100004bb4(&DAT_100a8bd60,&DAT_100820b50);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003b8818();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_120 - extraout_x8,&DAT_1009b8f18,&DAT_1009b8f18,param_1,uVar1,uVar2);
  local_e0 = *unaff_x20;
  local_120 = local_120 & 0xffffffffffffff00;
  puVar4 = &DAT_100a8bd48;
  FUN_100004bb4(&DAT_100a8bd48,&DAT_100820b48);
  puVar5 = puVar4;
  FUN_1003b8630();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_e0,&local_120,puVar3,puVar4,puVar5);
  if (unaff_x21 == 0) {
    uStack_98 = unaff_x20[2];
    local_a0 = unaff_x20[1];
    uStack_88 = unaff_x20[4];
    uStack_90 = unaff_x20[3];
    local_80 = unaff_x20[5];
    uStack_78 = (undefined7)unaff_x20[6];
    uStack_71 = *(undefined4 *)((long)unaff_x20 + 0x37);
    uStack_d8 = unaff_x20[2];
    local_e0 = unaff_x20[1];
    uStack_c8 = unaff_x20[4];
    uStack_d0 = unaff_x20[3];
    local_c0 = unaff_x20[5];
    uStack_b8 = (undefined7)unaff_x20[6];
    uStack_b1 = *(undefined4 *)((long)unaff_x20 + 0x37);
    local_51 = 1;
    puVar6 = &local_a0;
    FUN_1000b049c(puVar6,&local_120);
    FUN_1003b7f38();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_e0,&local_51,puVar3,&DAT_1009e6360,puVar6);
    uStack_118 = uStack_d8;
    local_120 = local_e0;
    uStack_108 = uStack_c8;
    local_110 = uStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = local_c0;
    local_f1 = uStack_b1;
    FUN_1000abcec(&local_120);
  }
  (**(code **)(lVar7 + 8))((long)&local_120 - extraout_x8,puVar3);
  return;
}

