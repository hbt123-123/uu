// rea decompile_all
// name: FUN_100063780
// address: 0x100063780
// body: available
// range: 0x100063780-0x100063a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100063780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_170 [16];
  long alStack_160 [4];
  undefined1 auStack_140 [16];
  long alStack_130 [5];
  undefined1 auStack_108 [8];
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  
  puVar6 = PTR___ss12CaseIterableTL_1000f04a8;
  lVar10 = *(long *)(param_7 + 8);
  lVar3 = 0xff;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  local_a4 = param_5;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,param_6,PTR___ss12CaseIterableTL_1000f04a8,
             PTR___s8AllCasess12CaseIterablePTl_1000f02b0);
  lVar4 = lVar10;
  _swift_getAssociatedConformanceWitness
            (lVar10,param_6,lVar3,puVar6,PTR___ss12CaseIterableP8AllCasesAB_SlTn_1000f04a0);
  local_d8 = *(undefined8 *)(lVar4 + 8);
  lVar5 = 0;
  __ss18EnumeratedSequenceVMa(0,lVar3);
  local_b8 = *(long *)(lVar5 + -8);
  puVar12 = auStack_e0 + -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar3 + -8);
  lVar11 = (long)puVar12 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar5;
  __ss12CaseIterableP8allCases03AllD0QzvgZTj(lVar11,param_6,lVar10);
  puVar6 = &DAT_100104038;
  local_98 = param_7;
  local_80 = param_6;
  lStack_78 = param_7;
  FUN_10000eb08(&DAT_100104038,&DAT_1000d3b60);
  pcVar7 = FUN_10006521c;
  FUN_100070270(FUN_10006521c,auStack_90,lVar3,puVar6,PTR___ss5NeverON_1000f0680,lVar4,
                PTR___ss5NeverOs5ErrorsWP_1000f0688);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar11,lVar3);
  lVar4 = *(long *)(pcVar7 + 0x10) + 1;
  lVar5 = 0x28;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    pcVar1 = pcVar7 + lVar5;
    lVar5 = lVar5 + 0x48;
  } while (*(long *)pcVar1 == 0);
  __ss12CaseIterableP8allCases03AllD0QzvgZTj(lVar11,param_6,lVar10);
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar12,lVar3,local_d8);
  (*pcVar9)(lVar11,lVar3);
  lVar5 = local_98;
  *(undefined8 *)(lVar11 + -0x50) = param_6;
  *(long *)(lVar11 + -0x48) = lVar5;
  *(undefined8 *)(lVar11 + -0x40) = local_d0;
  *(undefined8 *)(lVar11 + -0x38) = local_c8;
  *(undefined8 *)(lVar11 + -0x30) = local_c0;
  *(bool *)(lVar11 + -0x28) = lVar4 != 0;
  uVar2 = local_b0;
  *(code **)(lVar11 + -0x20) = pcVar7;
  *(undefined8 *)(lVar11 + -0x18) = uVar2;
  *(char *)(lVar11 + -0x10) = (char)local_a4;
  *(undefined8 *)(lVar11 + -0x80) = param_6;
  *(long *)(lVar11 + -0x78) = lVar5;
  *(code **)(lVar11 + -0x70) = FUN_100065230;
  *(long *)(lVar11 + -0x68) = lVar11 + -0x60;
  lVar4 = local_a0;
  puVar6 = PTR___ss18EnumeratedSequenceVyxGSTsMc_1000f0520;
  _swift_getWitnessTable(PTR___ss18EnumeratedSequenceVyxGSTsMc_1000f0520,local_a0);
  pcVar9 = FUN_100065730;
  FUN_100063088(FUN_100065730,lVar11 + -0x90,lVar4,&DAT_1000f9648,PTR___ss5NeverON_1000f0680,puVar6,
                PTR___ss5NeverOs5ErrorsWP_1000f0688);
  _swift_bridgeObjectRelease(pcVar7);
  (**(code **)(local_b8 + 8))(puVar12,lVar4);
  pcVar7 = pcVar9;
  FUN_1000a38e8(pcVar9);
  _swift_bridgeObjectRelease(pcVar9);
  auVar13._8_8_ = lVar4;
  auVar13._0_8_ = pcVar7;
  return auVar13;
}

