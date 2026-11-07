// rea decompile_all
// name: FUN_10051cbb8
// address: 0x10051cbb8
// body: available
// range: 0x10051cbb8-0x10051cd6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10051cbb8(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051cd6c);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(param_1 + uVar9 * 8 + 0x20);
      lVar7 = param_3;
      FUN_10051cd6c(uVar3,param_3,param_4,param_5);
      if (lVar7 == 0) {
        _swift_bridgeObjectRelease();
        FUN_10051dfb8();
        _swift_allocError(&DAT_1009cf9b8,param_1,0,0);
        *param_1 = 1;
        _swift_willThrow();
        _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
        FUN_100006cdc(0,0xc000000000000000);
        _swift_bridgeObjectRelease(puVar6);
        return puVar6;
      }
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_100507174(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100507174(puVar6,uVar1 + 1,1,puVar5);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar3;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar7;
    } while (uVar8 != uVar9);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
  _swift_bridgeObjectRelease(param_1);
  FUN_100006cdc(0,0xc000000000000000);
  _swift_bridgeObjectRelease(puVar4);
  return puVar6;
}

