// rea decompile_all
// name: FUN_1003b8858
// address: 0x1003b8858
// body: available
// range: 0x1003b8858-0x1003b8acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b89d8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8958) */

void FUN_1003b8858(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_170 [8];
  ulong local_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined3 local_140;
  undefined5 uStack_13d;
  undefined3 uStack_138;
  undefined4 uStack_135;
  undefined4 uStack_131;
  ulong local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined4 local_f1;
  undefined1 local_e9;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined7 uStack_c0;
  undefined4 uStack_b9;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined4 uStack_81;
  
  puVar3 = &DAT_100a8c0e0;
  FUN_100004bb4(&DAT_100a8c0e0,&DAT_100822230);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003b8818();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_170 + -extraout_x8,&DAT_1009b8f18,&DAT_1009b8f18,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar5 = &DAT_100a8bd48;
    FUN_100004bb4(&DAT_100a8bd48,&DAT_100820b48);
    local_168 = local_168 & 0xffffffffffffff00;
    puVar6 = puVar5;
    FUN_1003bd894();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_128,puVar5,&local_168,puVar3,puVar5,puVar6);
    local_e9 = 1;
    FUN_1003bd7f4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_e8,&DAT_1009e6360,&local_e9,puVar3,&DAT_1009e6360,puVar5);
    (**(code **)(lVar7 + 8))(auStack_170 + -extraout_x8,puVar3);
    uStack_a8 = uStack_e0;
    local_b0 = local_e8;
    uStack_98 = uStack_d0;
    local_a0 = local_d8;
    local_90 = local_c8;
    uStack_81 = uStack_b9;
    local_168 = local_128;
    uStack_158 = uStack_e0;
    uStack_160 = local_e8;
    uStack_148 = uStack_d0;
    uStack_150 = local_d8;
    uStack_138 = (undefined3)uStack_c0;
    uStack_135 = (undefined4)((uint7)uStack_c0 >> 0x18);
    local_140 = (undefined3)local_c8;
    uStack_13d = (undefined5)((ulong)local_c8 >> 0x18);
    uStack_131 = uStack_b9;
    FUN_1003bd944(&local_168,&local_128);
    FUN_10003f094(param_2);
    uStack_118 = uStack_a8;
    local_120 = local_b0;
    uStack_108 = uStack_98;
    local_110 = local_a0;
    uStack_100 = local_90;
    local_f1 = uStack_81;
    FUN_1003bd978(&local_128);
    param_1[1] = uStack_160;
    *param_1 = local_168;
    param_1[3] = uStack_150;
    param_1[2] = uStack_158;
    param_1[5] = CONCAT53(uStack_13d,local_140);
    param_1[4] = uStack_148;
    *(ulong *)((long)param_1 + 0x33) = CONCAT44(uStack_131,uStack_135);
    *(ulong *)((long)param_1 + 0x2b) = CONCAT35(uStack_138,uStack_13d);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

