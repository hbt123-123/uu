// rea decompile_all
// name: FUN_1000596e8
// address: 0x1000596e8
// body: available
// range: 0x1000596e8-0x100059b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000596e8(byte *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_150 [16];
  undefined8 *local_140;
  byte local_138;
  undefined1 local_137;
  byte local_136;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [128];
  undefined1 auStack_80 [32];
  
  bVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  if (bVar1 == 2) {
    iVar3 = *(int *)(param_3 + 0xc);
    local_108 = param_7;
    iVar2 = iVar3;
    _CGDisplayIsOnline();
    _CGDisplayIsActive();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_136 = (byte)param_8 & 1;
    local_140 = param_3;
    local_138 = iVar2 != 0;
    local_137 = iVar3 != 0;
    FUN_1003fb4bc(thunk_FUN_10007f08c,auStack_150,0xd0000000000000a5,0x800000010087d850,
                  0xd000000000000057,0x800000010087dd30,0x3d4,0);
  }
  else {
    if ((bVar1 & 1) == 0) {
      FUN_100057cf8(param_3,param_4,param_5,param_6);
      goto LAB_100059aac;
    }
    local_128 = param_4;
    local_11c = param_8;
    local_118 = param_5;
    local_110 = param_6;
    local_108 = param_7;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_140 = param_3;
    FUN_1003fb4bc(thunk_FUN_10007f0b0,auStack_150,0xd0000000000000a5,0x800000010087d850,
                  0xd000000000000050,0x800000010087dd90,0x3ef,0);
    uVar4 = (ulong)*(uint *)(param_3 + 0xc);
    FUN_10004adfc();
    if ((uVar4 & 1) != 0) {
      puVar7 = &DAT_1009985d0;
      puVar5 = puVar7;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar5 + 0x10,param_2);
      puVar6 = &DAT_1009991b0;
      _swift_allocObject(&DAT_1009991b0,0x95,7);
      uVar8 = param_3[8];
      uVar12 = param_3[0xb];
      uVar10 = param_3[10];
      *(undefined8 *)(puVar6 + 0x60) = param_3[9];
      *(undefined8 *)(puVar6 + 0x58) = uVar8;
      *(undefined8 *)(puVar6 + 0x70) = uVar12;
      *(undefined8 *)(puVar6 + 0x68) = uVar10;
      uVar8 = param_3[0xc];
      *(undefined8 *)(puVar6 + 0x80) = param_3[0xd];
      *(undefined8 *)(puVar6 + 0x78) = uVar8;
      uVar8 = *(undefined8 *)((long)param_3 + 0x6d);
      *(undefined8 *)(puVar6 + 0x8d) = *(undefined8 *)((long)param_3 + 0x75);
      *(undefined8 *)(puVar6 + 0x85) = uVar8;
      uVar8 = *param_3;
      uVar12 = param_3[3];
      uVar10 = param_3[2];
      *(undefined8 *)(puVar6 + 0x20) = param_3[1];
      *(undefined8 *)(puVar6 + 0x18) = uVar8;
      *(undefined8 *)(puVar6 + 0x30) = uVar12;
      *(undefined8 *)(puVar6 + 0x28) = uVar10;
      uVar8 = param_3[4];
      uVar12 = param_3[7];
      uVar10 = param_3[6];
      *(undefined8 *)(puVar6 + 0x40) = param_3[5];
      *(undefined8 *)(puVar6 + 0x38) = uVar8;
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x50) = uVar12;
      *(undefined8 *)(puVar6 + 0x48) = uVar10;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar7 + 0x10,param_2);
      puVar5 = &DAT_1009991d8;
      _swift_allocObject(&DAT_1009991d8,0xc0,7);
      uVar12 = local_108;
      uVar10 = local_110;
      uVar8 = local_128;
      uVar9 = param_3[8];
      uVar13 = param_3[0xb];
      uVar11 = param_3[10];
      *(undefined8 *)(puVar5 + 0x60) = param_3[9];
      *(undefined8 *)(puVar5 + 0x58) = uVar9;
      *(undefined8 *)(puVar5 + 0x70) = uVar13;
      *(undefined8 *)(puVar5 + 0x68) = uVar11;
      uVar9 = param_3[0xc];
      *(undefined8 *)(puVar5 + 0x80) = param_3[0xd];
      *(undefined8 *)(puVar5 + 0x78) = uVar9;
      uVar9 = *(undefined8 *)((long)param_3 + 0x6d);
      *(undefined8 *)(puVar5 + 0x8d) = *(undefined8 *)((long)param_3 + 0x75);
      *(undefined8 *)(puVar5 + 0x85) = uVar9;
      uVar9 = *param_3;
      uVar13 = param_3[3];
      uVar11 = param_3[2];
      *(undefined8 *)(puVar5 + 0x20) = param_3[1];
      *(undefined8 *)(puVar5 + 0x18) = uVar9;
      *(undefined8 *)(puVar5 + 0x30) = uVar13;
      *(undefined8 *)(puVar5 + 0x28) = uVar11;
      uVar9 = param_3[4];
      uVar13 = param_3[7];
      uVar11 = param_3[6];
      *(undefined8 *)(puVar5 + 0x40) = param_3[5];
      *(undefined8 *)(puVar5 + 0x38) = uVar9;
      *(undefined **)(puVar5 + 0x10) = puVar7;
      *(undefined8 *)(puVar5 + 0x50) = uVar13;
      *(undefined8 *)(puVar5 + 0x48) = uVar11;
      *(undefined8 *)(puVar5 + 0x98) = local_128;
      *(undefined8 *)(puVar5 + 0xa0) = local_118;
      *(undefined8 *)(puVar5 + 0xa8) = local_110;
      puVar5[0xb0] = (byte)local_11c & 1;
      *(undefined8 *)(puVar5 + 0xb8) = local_108;
      FUN_10007eca0(param_3,auStack_100);
      FUN_10007eca0(param_3,auStack_100);
      _swift_retain(uVar10);
      _swift_bridgeObjectRetain(uVar12);
      local_140 = (undefined8 *)&DAT_100998890;
      FUN_100058d1c(uVar8,param_9,thunk_FUN_10007f0c4,puVar6,thunk_FUN_100082a38,puVar5,
                    &DAT_100998878,FUN_10007ed80);
      _swift_release(puVar6);
      _swift_release(puVar5);
      goto LAB_100059aac;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    param_8 = local_11c;
    local_138 = (byte)local_11c & 1;
    local_140 = param_3;
    FUN_1003fb4bc(thunk_FUN_10007f0b8,auStack_150,0xd0000000000000a5,0x800000010087d850,
                  0xd000000000000050,0x800000010087dd90,0x3f1,0);
    param_4 = local_128;
    param_5 = local_118;
    param_6 = local_110;
  }
  if ((param_8 & 1) == 0) {
    FUN_10005b088(param_3,0x2715,param_5,param_6);
  }
  else {
    FUN_100059d74(param_3,local_108,param_4,param_5,param_6);
  }
LAB_100059aac:
  _swift_release(param_2);
  return;
}

