// rea decompile_all
// name: FUN_10006234c
// address: 0x10006234c
// body: available
// range: 0x10006234c-0x1000626c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10006234c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_1f0 [16];
  long alStack_1e0 [4];
  undefined1 auStack_1c0 [16];
  long alStack_1b0 [7];
  undefined1 auStack_178 [8];
  undefined8 auStack_170 [3];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 local_108;
  long local_100;
  undefined4 local_f4;
  long local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar8 = PTR___ss12CaseIterableTL_1000f04a8;
  lVar13 = *(long *)(param_8 + 8);
  lVar5 = 0xff;
  local_108 = param_5;
  local_f4 = param_6;
  local_e8 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,lVar13,param_7,PTR___ss12CaseIterableTL_1000f04a8,
             PTR___s8AllCasess12CaseIterablePTl_1000f02b0);
  lVar10 = lVar13;
  _swift_getAssociatedConformanceWitness
            (lVar13,param_7,lVar5,puVar8,PTR___ss12CaseIterableP8AllCasesAB_SlTn_1000f04a0);
  local_138 = *(undefined8 *)(lVar10 + 8);
  lVar6 = 0;
  local_148 = lVar10;
  __ss18EnumeratedSequenceVMa(0,lVar5);
  local_100 = *(long *)(lVar6 + -8);
  local_110 = auStack_150 + -(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar5 + -8);
  lVar12 = (long)local_110 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  local_128 = param_1;
  local_120 = param_2;
  local_118 = param_3;
  local_f0 = lVar6;
  local_b0 = param_7;
  lStack_a8 = param_8;
  local_a0 = param_1;
  uStack_98 = param_2;
  local_90 = param_3;
  __sSqMa(0,param_7);
  puVar3 = PTR___ss5NeverOs5ErrorsWP_1000f0688;
  puVar2 = PTR___ss5NeverON_1000f0680;
  FUN_100060ddc(&local_78,FUN_1000653b8,auStack_c0,uVar7,PTR___ss5NeverON_1000f0680,
                PTR___sSSN_1000f02f8,PTR___ss5NeverOs5ErrorsWP_1000f0688);
  local_140 = local_78;
  local_130 = uStack_70;
  __ss12CaseIterableP8allCases03AllD0QzvgZTj(lVar12,param_7,lVar13);
  puVar8 = &DAT_100104038;
  local_d0 = param_7;
  lStack_c8 = param_8;
  FUN_10000eb08(&DAT_100104038,&DAT_1000d3b60);
  pcVar9 = FUN_10006571c;
  FUN_100070270(FUN_10006571c,auStack_e0,lVar5,puVar8,puVar2,local_148,puVar3);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar12,lVar5);
  lVar10 = *(long *)(pcVar9 + 0x10) + 1;
  lVar6 = 0x28;
  do {
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) break;
    pcVar1 = pcVar9 + lVar6;
    lVar6 = lVar6 + 0x48;
  } while (*(long *)pcVar1 == 0);
  __ss12CaseIterableP8allCases03AllD0QzvgZTj(lVar12,param_7,lVar13);
  puVar4 = local_110;
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(local_110,lVar5,local_138);
  (*pcVar11)(lVar12,lVar5);
  *(undefined8 *)(lVar12 + -0x60) = param_7;
  *(long *)(lVar12 + -0x58) = param_8;
  uVar7 = local_120;
  *(undefined8 *)(lVar12 + -0x50) = local_128;
  *(undefined8 *)(lVar12 + -0x48) = uVar7;
  *(undefined8 *)(lVar12 + -0x40) = local_118;
  *(code **)(lVar12 + -0x38) = pcVar9;
  *(undefined8 *)(lVar12 + -0x30) = local_108;
  *(bool *)(lVar12 + -0x28) = lVar10 != 0;
  uVar7 = local_140;
  *(undefined8 *)(lVar12 + -0x20) = local_e8;
  *(undefined8 *)(lVar12 + -0x18) = uVar7;
  uVar7 = local_130;
  *(undefined8 *)(lVar12 + -0x10) = local_130;
  *(char *)(lVar12 + -8) = (char)local_f4;
  *(undefined8 *)(lVar12 + -0x90) = param_7;
  *(long *)(lVar12 + -0x88) = param_8;
  *(code **)(lVar12 + -0x80) = FUN_100065444;
  *(long *)(lVar12 + -0x78) = lVar12 + -0x70;
  lVar10 = local_f0;
  puVar8 = PTR___ss18EnumeratedSequenceVyxGSTsMc_1000f0520;
  _swift_getWitnessTable(PTR___ss18EnumeratedSequenceVyxGSTsMc_1000f0520,local_f0);
  pcVar11 = FUN_100065730;
  FUN_100063088(FUN_100065730,lVar12 + -0xa0,lVar10,&DAT_1000f9648,PTR___ss5NeverON_1000f0680,puVar8
                ,PTR___ss5NeverOs5ErrorsWP_1000f0688);
  _swift_bridgeObjectRelease(pcVar9);
  _swift_bridgeObjectRelease(uVar7);
  (**(code **)(local_100 + 8))(puVar4,lVar10);
  pcVar9 = pcVar11;
  FUN_1000a38e8(pcVar11);
  _swift_bridgeObjectRelease(pcVar11);
  auVar14._8_8_ = lVar10;
  auVar14._0_8_ = pcVar9;
  return auVar14;
}

