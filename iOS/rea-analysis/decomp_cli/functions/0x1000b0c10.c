// rea decompile_all
// name: FUN_1000b0c10
// address: 0x1000b0c10
// body: available
// range: 0x1000b0c10-0x1000b0e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b0c10(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  __ss11_StringGutsV4growyySiF(0x6f);
  __sSS6appendyySSF(0xd000000000000027,0x80000001000cac80);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0xd000000000000044,0x80000001000cacb0);
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_1000798d0(0,3,0);
  uVar7 = DAT_100103a88;
  uVar6 = DAT_100103a80;
  uVar2 = *(ulong *)(puVar3 + 0x10);
  uVar8 = *(ulong *)(puVar3 + 0x18);
  uVar1 = uVar2 + 1;
  _swift_bridgeObjectRetain(DAT_100103a88);
  if (uVar8 >> 1 <= uVar2) {
    FUN_1000798d0(1 < uVar8,uVar1,1);
  }
  *(ulong *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + uVar2 * 0x10 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + uVar2 * 0x10 + 0x28) = uVar7;
  uVar7 = DAT_100103a98;
  uVar6 = DAT_100103a90;
  uVar8 = *(ulong *)(puVar3 + 0x18);
  _swift_bridgeObjectRetain(DAT_100103a98);
  if (uVar8 >> 1 <= uVar1) {
    FUN_1000798d0(1 < uVar8,uVar2 + 2,1);
  }
  *(ulong *)(puVar3 + 0x10) = uVar2 + 2;
  *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar7;
  uVar7 = DAT_100103aa8;
  uVar6 = DAT_100103aa0;
  uVar1 = *(ulong *)(puVar3 + 0x10);
  uVar2 = *(ulong *)(puVar3 + 0x18);
  _swift_bridgeObjectRetain(DAT_100103aa8);
  if (uVar2 >> 1 <= uVar1) {
    FUN_1000798d0(1 < uVar2,uVar1 + 1,1);
  }
  *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar7;
  puVar4 = &DAT_100103ed8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar5 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  uVar6 = 0x20;
  uVar7 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar4,puVar5);
  _swift_release(puVar3);
  __sSS6appendyySSF(uVar6,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  return ZEXT816(0xe000000000000000) << 0x40;
}

