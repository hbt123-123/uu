// rea decompile_all
// name: FUN_100052b78
// address: 0x100052b78
// body: available
// range: 0x100052b78-0x100052ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100052b78(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar7 = (undefined *)*unaff_x20;
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar7;
  }
  puVar2 = &DAT_100103f18;
  FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
  _swift_initStackObject();
  uStack_48 = unaff_x20[3];
  local_50 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x28) = uStack_48;
  *(undefined8 *)(puVar2 + 0x20) = local_50;
  local_88 = puVar3;
  _swift_bridgeObjectRetain(puVar7);
  FUN_10000eb58(&local_50,&local_98);
  FUN_10006d548(puVar2);
  puVar7 = local_88;
  local_98 = local_88;
  puVar3 = &DAT_100103ed8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar4 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  uVar5 = 0x5f;
  uVar6 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x5f,0xe100000000000000,puVar3,puVar4);
  _swift_bridgeObjectRelease(puVar7);
  local_98 = (undefined *)0x5f;
  uStack_90 = 0xe100000000000000;
  __sSS6appendyySSF(uVar5,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  auVar1._8_8_ = uStack_90;
  auVar1._0_8_ = local_98;
  return auVar1;
}

