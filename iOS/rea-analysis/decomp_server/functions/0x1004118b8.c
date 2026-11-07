// rea decompile_all
// name: FUN_1004118b8
// address: 0x1004118b8
// body: available
// range: 0x1004118b8-0x100411a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004119cc) */

void FUN_1004118b8(byte *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_120 [15];
  undefined1 local_111;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  
  puVar3 = &DAT_100a8e538;
  FUN_100004bb4(&DAT_100a8e538,&DAT_1008257b0);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_10040efec();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_120 + -extraout_x8,&DAT_1009bcff8,&DAT_1009bcff8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_110 = 0;
    puVar5 = &local_110;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    local_111 = 1;
    puVar6 = puVar5;
    FUN_1004143a4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_110,&DAT_1009bc9e0,&local_111,puVar3,&DAT_1009bc9e0,puVar6);
    (**(code **)(lVar7 + 8))(auStack_120 + -extraout_x8,puVar3);
    uStack_a1 = (undefined1)uStack_f8;
    uStack_a0 = (undefined7)((ulong)uStack_f8 >> 8);
    local_a9 = (undefined1)uStack_100;
    uStack_a8 = (undefined7)((ulong)uStack_100 >> 8);
    uStack_91 = (undefined1)uStack_e8;
    uStack_90 = (undefined7)((ulong)uStack_e8 >> 8);
    local_99 = (undefined1)local_f0;
    uStack_98 = (undefined7)((ulong)local_f0 >> 8);
    uStack_81 = (undefined1)uStack_d8;
    uStack_80 = (undefined7)((ulong)uStack_d8 >> 8);
    local_89 = (undefined1)uStack_e0;
    uStack_88 = (undefined7)((ulong)uStack_e0 >> 8);
    uStack_71 = (undefined1)uStack_c8;
    uStack_70 = (undefined7)((ulong)uStack_c8 >> 8);
    local_79 = (undefined1)local_d0;
    uStack_78 = (undefined7)((ulong)local_d0 >> 8);
    uStack_b1 = (undefined1)uStack_108;
    uStack_b0 = (undefined7)((ulong)uStack_108 >> 8);
    local_b9 = local_110;
    uStack_b8 = uStack_10f;
    FUN_10003f094(param_2);
    *param_1 = (byte)puVar5 & 1;
    *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_91,uStack_98);
    *(ulong *)(param_1 + 0x21) = CONCAT17(local_99,uStack_a0);
    *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_81,uStack_88);
    *(ulong *)(param_1 + 0x31) = CONCAT17(local_89,uStack_90);
    *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_71,uStack_78);
    *(ulong *)(param_1 + 0x41) = CONCAT17(local_79,uStack_80);
    *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_70,uStack_71);
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_b1,uStack_b8);
    *(ulong *)(param_1 + 1) = CONCAT17(local_b9,uStack_c0);
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_a1,uStack_a8);
    *(ulong *)(param_1 + 0x11) = CONCAT17(local_a9,uStack_b0);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

