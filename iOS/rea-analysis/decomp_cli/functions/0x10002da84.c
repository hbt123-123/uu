// rea decompile_all
// name: FUN_10002da84
// address: 0x10002da84
// body: available
// range: 0x10002da84-0x10002dc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10002da84(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar3 = &DAT_100102c30;
  FUN_10000eb08(&DAT_100102c30,&DAT_1000d0700);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  __sSS6appendyySSF(*param_1,param_1[1]);
  *(undefined8 *)(puVar3 + 0x20) = 0x6973726556696c63;
  *(undefined8 *)(puVar3 + 0x28) = 0xec000000203a6e6f;
  lVar4 = param_1[5];
  if (lVar4 == 0) {
    uVar8 = 0x6c6c756e;
    lVar4 = -0x1c00000000000000;
  }
  else {
    uVar8 = param_1[4];
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar8,lVar4);
  _swift_bridgeObjectRelease(lVar4);
  *(undefined8 *)(puVar3 + 0x30) = 0x6d754e646c697562;
  *(undefined8 *)(puVar3 + 0x38) = 0xed0000203a726562;
  lVar4 = param_1[3];
  if (lVar4 == 0) {
    uVar8 = 0x6c6c756e;
    lVar4 = -0x1c00000000000000;
  }
  else {
    uVar8 = param_1[2];
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar8,lVar4);
  _swift_bridgeObjectRelease(lVar4);
  *(undefined8 *)(puVar3 + 0x40) = 0x6973726556707061;
  *(undefined8 *)(puVar3 + 0x48) = 0xec000000203a6e6f;
  lVar4 = param_1[7];
  puVar6 = puVar3;
  if (lVar4 != 0) {
    uVar8 = param_1[6];
    uVar1 = *(ulong *)(puVar3 + 0x10);
    uVar2 = *(ulong *)(puVar3 + 0x18);
    _swift_bridgeObjectRetain(lVar4);
    if (uVar2 >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < uVar2);
      FUN_100021cb0(puVar6,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar8;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar4;
  }
  puVar3 = &DAT_100102c38;
  FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
  puVar5 = &DAT_100102c40;
  FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
  uVar8 = 10;
  uVar7 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar3,puVar5);
  _swift_bridgeObjectRelease(puVar6);
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}

