// rea decompile_all
// name: FUN_100095014
// address: 0x100095014
// body: available
// range: 0x100095014-0x10009518f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100095014(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_98 [7];
  
  lVar7 = *(long *)(param_2 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar7 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FUN_100083ab0(param_2,local_98);
      puVar2 = local_98[0];
      FUN_100083afc(local_98);
      puVar3 = puVar2;
      _swift_conformsToProtocol(puVar2,&TargetProtocolDescriptor_1000e1e60);
      if (puVar3 != (undefined *)0x0 && puVar2 != (undefined *)0x0) {
        puVar4 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar5;
        if (((ulong)puVar4 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_10006e820(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puVar5 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_10006e820(puVar5,uVar1 + 1,1,puVar6);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar5 + uVar1 * 0x10 + 0x20) = puVar2;
        *(undefined **)(puVar5 + uVar1 * 0x10 + 0x28) = puVar3;
      }
      param_2 = param_2 + 0x38;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(puVar5 + 0x10);
  local_98[0] = puVar5;
  if ((lVar7 == 0) || (lVar8 != *(long *)((long)(puVar5 + 0x10) + lVar7 * 2 * 8))) {
    puVar5 = &DAT_100103f10;
    FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x28) = uVar9;
    *(long *)(puVar5 + 0x20) = lVar8;
    FUN_10006d728();
  }
  return local_98[0];
}

