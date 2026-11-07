// rea decompile_all
// name: FUN_1007d169c
// address: 0x1007d169c
// body: available
// range: 0x1007d169c-0x1007d1a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1007d169c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_340 [8];
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  
  lVar2 = 0;
  local_338 = param_5;
  local_330 = param_7;
  local_328 = param_9;
  local_320 = param_6;
  local_318 = param_8;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  puVar6 = auStack_340 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar6,param_2,lVar2);
  puVar3 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  uVar9 = 0xd;
  *(undefined8 *)(puVar3 + 0x18) = 0x1a;
  *(undefined8 *)(puVar3 + 0x10) = 0xd;
  *(undefined8 *)(puVar3 + 0x20) = 0x6d617473656d6974;
  *(undefined8 *)(puVar3 + 0x28) = 0xe900000000000070;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  uVar7 = local_318;
  puVar5 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  *(undefined **)(puVar3 + 0x48) = puVar5;
  *(undefined8 *)(puVar3 + 0x50) = 0x49746e656d676573;
  puVar5 = PTR___sSiN_100995968;
  *(undefined8 *)(puVar3 + 0x58) = 0xe900000000000064;
  *(undefined8 *)(puVar3 + 0x60) = param_3;
  *(undefined **)(puVar3 + 0x78) = puVar5;
  *(undefined8 *)(puVar3 + 0x80) = 0x657a6973;
  *(undefined8 *)(puVar3 + 0x88) = 0xe400000000000000;
  *(undefined8 *)(puVar3 + 0x90) = param_4;
  *(undefined **)(puVar3 + 0xa8) = puVar5;
  *(undefined8 *)(puVar3 + 0xb0) = 0x6e6f697461727564;
  *(undefined8 *)(puVar3 + 0xb8) = 0xe800000000000000;
  param_1 = param_1 * 1000.0;
  if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d1a08);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      *(long *)(puVar3 + 0xc0) = (long)param_1;
      *(undefined **)(puVar3 + 0xd8) = puVar5;
      *(undefined8 *)(puVar3 + 0xe0) = 0x676e69646f636e65;
      puVar4 = PTR___sSSN_1009957f8;
      *(undefined8 *)(puVar3 + 0xe8) = 0xe800000000000000;
      *(undefined8 *)(puVar3 + 0xf0) = local_338;
      *(undefined8 *)(puVar3 + 0xf8) = local_320;
      *(undefined **)(puVar3 + 0x108) = puVar4;
      *(undefined8 *)(puVar3 + 0x110) = 0x656e6961746e6f63;
      *(undefined8 *)(puVar3 + 0x118) = 0xe900000000000072;
      *(undefined8 *)(puVar3 + 0x120) = local_330;
      *(undefined8 *)(puVar3 + 0x128) = local_318;
      *(undefined **)(puVar3 + 0x138) = puVar4;
      *(undefined8 *)(puVar3 + 0x140) = 0x746867696568;
      *(undefined8 *)(puVar3 + 0x148) = 0xe600000000000000;
      *(undefined8 *)(puVar3 + 0x150) = local_328;
      *(undefined **)(puVar3 + 0x168) = puVar5;
      *(undefined8 *)(puVar3 + 0x170) = 0x6874646977;
      *(undefined8 *)(puVar3 + 0x178) = 0xe500000000000000;
      *(undefined8 *)(puVar3 + 0x180) = param_10;
      *(undefined **)(puVar3 + 0x198) = puVar5;
      *(undefined8 *)(puVar3 + 0x1a0) = 0x756f43656d617266;
      *(undefined8 *)(puVar3 + 0x1a8) = 0xea0000000000746e;
      *(undefined8 *)(puVar3 + 0x1b0) = param_11;
      *(undefined **)(puVar3 + 0x1c8) = puVar5;
      *(undefined8 *)(puVar3 + 0x1d0) = 0x746152656d617266;
      *(undefined8 *)(puVar3 + 0x1d8) = 0xed00006570795465;
      *(undefined8 *)(puVar3 + 0x1e0) = param_12;
      *(undefined8 *)(puVar3 + 0x1e8) = param_13;
      *(undefined **)(puVar3 + 0x1f8) = puVar4;
      *(undefined8 *)(puVar3 + 0x200) = 0x746152656d617266;
      *(undefined8 *)(puVar3 + 0x208) = 0xe900000000000065;
      *(undefined **)(puVar3 + 0x228) = puVar5;
      *(undefined8 *)(puVar3 + 0x210) = param_14;
      *(undefined8 *)(puVar3 + 0x230) = 0x7466656c;
      *(undefined8 *)(puVar3 + 0x238) = 0xe400000000000000;
      *(undefined **)(puVar3 + 600) = puVar5;
      *(undefined8 *)(puVar3 + 0x240) = param_15;
      *(undefined8 *)(puVar3 + 0x260) = 0x706f74;
      *(undefined8 *)(puVar3 + 0x268) = 0xe300000000000000;
      *(undefined **)(puVar3 + 0x288) = puVar5;
      *(undefined8 *)(puVar3 + 0x270) = param_16;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(param_13);
      puVar4 = puVar3;
      FUN_1007c7d18(puVar3);
      _swift_setDeallocating(puVar3);
      uVar7 = *(undefined8 *)(puVar3 + 0x10);
      puVar5 = &DAT_100abc778;
      FUN_1007b4550(&DAT_100abc778);
      _swift_arrayDestroy(puVar3 + 0x20,uVar7,puVar5);
      FUN_1007cf0e4(puVar6,0x6f65646976,0xe500000000000000,puVar4);
      _swift_bridgeObjectRelease(puVar4);
      (**(code **)(lVar8 + 8))(param_2,lVar2);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d1a10);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d1a0c);
  (*pcVar1)();
}

