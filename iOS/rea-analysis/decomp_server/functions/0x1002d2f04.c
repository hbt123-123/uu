// rea decompile_all
// name: FUN_1002d2f04
// address: 0x1002d2f04
// body: available
// range: 0x1002d2f04-0x1002d3013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d2f04(undefined1 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  
  if (*param_2 == '\x04') {
    uVar6 = 1;
  }
  else {
    puVar2 = &DAT_1009ae030;
    _swift_allocObject(&DAT_1009ae030,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    lVar3 = 0;
    FUN_1002c76a8();
    iVar1 = *(int *)(lVar3 + 100);
    uVar7 = *(ulong *)(param_2 + iVar1);
    _swift_retain(param_4);
    uVar4 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      FUN_100296e04(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100296e04(uVar7,uVar4 + 1,1,uVar5);
      uVar5 = uVar7;
    }
    uVar6 = 0;
    *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
    lVar3 = uVar5 + uVar4 * 0x10;
    *(code **)(lVar3 + 0x20) = FUN_1000f4ed4;
    *(undefined **)(lVar3 + 0x28) = puVar2;
    *(ulong *)(param_2 + iVar1) = uVar5;
  }
  *param_1 = uVar6;
  return;
}

