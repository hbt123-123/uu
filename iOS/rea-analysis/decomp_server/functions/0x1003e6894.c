// rea decompile_all
// name: FUN_1003e6894
// address: 0x1003e6894
// body: available
// range: 0x1003e6894-0x1003e6b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1003e6894(uint param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((param_1 >> 0x11 & 1) != 0) {
    puVar2 = (undefined *)0x0;
    FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar5 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xa787e2;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xa300000000000000;
  }
  if ((param_1 >> 0x12 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x838ce2;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xa300000000000000;
  }
  if ((param_1 >> 0x13 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xa58ce2;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xa300000000000000;
  }
  if ((param_1 >> 0x14 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x988ce2;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xa300000000000000;
  }
  if ((param_1 >> 0x17 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x6e46;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xe200000000000000;
  }
  puVar2 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar4 = puVar2;
  FUN_10013048c();
  uVar3 = 0x202b20;
  uVar6 = 0xe300000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202b20,0xe300000000000000,puVar2,puVar4);
  _swift_bridgeObjectRelease(puVar5);
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar3;
  return auVar7;
}

