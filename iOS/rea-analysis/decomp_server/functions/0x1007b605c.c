// rea decompile_all
// name: FUN_1007b605c
// address: 0x1007b605c
// body: available
// range: 0x1007b605c-0x1007b63fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1007b605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             ulong param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long lStack_1a0;
  undefined1 auStack_188 [32];
  long local_168;
  long lStack_160;
  undefined *local_150;
  
  lVar5 = 0;
  local_1b8 = param_4;
  local_1b0 = param_7;
  __s10Foundation4DateVMa();
  local_1a8 = *(long *)(lVar5 + -8);
  puVar9 = auStack_1c0 + -(*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100abc770;
  lStack_1a0 = lVar5;
  FUN_1007b4550();
  _swift_initStackObject();
  uVar11 = 4;
  *(undefined8 *)(puVar6 + 0x18) = 8;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  *(undefined8 *)(puVar6 + 0x20) = 0x65707974;
  puVar2 = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar6 + 0x28) = 0xe400000000000000;
  *(undefined8 *)(puVar6 + 0x30) = 0x746c7561666564;
  *(undefined8 *)(puVar6 + 0x38) = 0xe700000000000000;
  *(undefined **)(puVar6 + 0x48) = puVar2;
  *(undefined8 *)(puVar6 + 0x50) = 0x79726f6765746163;
  *(undefined8 *)(puVar6 + 0x58) = 0xe800000000000000;
  *(undefined8 *)(puVar6 + 0x60) = param_2;
  *(undefined8 *)(puVar6 + 0x68) = param_3;
  *(undefined **)(puVar6 + 0x78) = puVar2;
  *(undefined8 *)(puVar6 + 0x80) = 0x6c6576656c;
  *(undefined8 *)(puVar6 + 0x88) = 0xe500000000000000;
  lVar5 = DAT_100abba58;
  _swift_bridgeObjectRetain(param_3);
  if (lVar5 != -1) {
    _swift_once(&DAT_100abba58,FUN_1007cdd44);
  }
  if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b63f8);
    (*pcVar4)();
  }
  if (*(ulong *)(DAT_100b3a970 + 0x10) <= param_6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b63fc);
    (*pcVar4)();
  }
  lVar5 = DAT_100b3a970 + param_6 * 0x10;
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(puVar6 + 0x90) = *(undefined8 *)(lVar5 + 0x20);
  *(undefined8 *)(puVar6 + 0x98) = uVar1;
  *(undefined **)(puVar6 + 0xa8) = puVar2;
  *(undefined8 *)(puVar6 + 0xb0) = 0x6d617473656d6974;
  *(undefined8 *)(puVar6 + 0xb8) = 0xe900000000000070;
  _swift_bridgeObjectRetain();
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  *(undefined **)(puVar6 + 0xd8) = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar6 + 0xc0) = uVar11;
  puVar7 = puVar6;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar6);
  uVar11 = *(undefined8 *)(puVar6 + 0x10);
  puVar8 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar6 + 0x20,uVar11,puVar8);
  lVar5 = local_1b0;
  if (param_5 != 0) {
    local_150 = puVar2;
    local_168 = local_1b8;
    lStack_160 = param_5;
    FUN_10007f3d4(&local_168,auStack_188);
    _swift_bridgeObjectRetain(param_5);
    puVar6 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    lVar5 = 0x6567617373656d;
    uVar10 = 0;
    FUN_1007b853c(0x6567617373656d,0xe700000000000000,puVar6);
    if ((uVar10 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar5 = *(long *)(puVar7 + 0x38) + lVar5 * 0x20;
      FUN_10003f094(lVar5);
      FUN_10007f3d4(auStack_188,lVar5);
    }
    lVar5 = local_1b0;
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  if (lVar5 != 0) {
    puVar6 = &DAT_100abc780;
    FUN_1007b4550();
    local_168 = lVar5;
    local_150 = puVar6;
    FUN_10007f3d4(&local_168,auStack_188);
    _swift_bridgeObjectRetain(lVar5);
    puVar6 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    lVar5 = 0x61746164;
    uVar10 = 0;
    FUN_1007b853c(0x61746164,0xe400000000000000,puVar6);
    if ((uVar10 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar5 = *(long *)(puVar7 + 0x38) + lVar5 * 0x20;
      FUN_10003f094(lVar5);
      FUN_10007f3d4(auStack_188,lVar5);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  lVar3 = lStack_1a0;
  lVar5 = local_1a8;
  (**(code **)(local_1a8 + 0x10))(puVar9,param_1,lStack_1a0);
  _swift_bridgeObjectRetain(puVar7);
  FUN_1007cf0e4(puVar9,0x7572636461657262,&DAT_ea0000000000626d,puVar7);
  _swift_bridgeObjectRelease(puVar7);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  _swift_bridgeObjectRelease(puVar7);
  return puVar9;
}

