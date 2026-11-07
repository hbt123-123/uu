// rea decompile_all
// name: FUN_10051f134
// address: 0x10051f134
// body: available
// range: 0x10051f134-0x10051f307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051f134(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  lVar12 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar12 != 0) {
    plVar13 = (long *)(param_1 + 0x28);
    do {
      lVar3 = plVar13[-1];
      lVar2 = *plVar13;
      _swift_bridgeObjectRetain(lVar2);
      lVar10 = lVar2;
      FUN_10051bd7c();
      _swift_bridgeObjectRelease(lVar2);
      if (lVar10 == 0) {
        _swift_bridgeObjectRelease();
        FUN_1004f9a9c();
        _swift_allocError(&DAT_1009d0558,puVar6,0,0);
        *puVar6 = 3;
        _swift_willThrow();
        return;
      }
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined1 *)0x0;
        FUN_100507174(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100507174(puVar6,uVar1 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar3;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar10;
      plVar13 = plVar13 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puVar7 = &DAT_100aaa3f0;
  FUN_100004bb4(&DAT_100aaa3f0,&DAT_100837ae0);
  puVar8 = puVar7;
  FUN_10051f3f0();
  uVar9 = 0x2c;
  uVar11 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar7,puVar8);
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(uVar9,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRetain(0xe100000000000000);
  __sSS6appendyySSF(0x22,0xe100000000000000);
  _swift_bridgeObjectRelease(0xe100000000000000);
  return;
}

