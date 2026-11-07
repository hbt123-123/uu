// rea decompile_all
// name: FUN_1006081a8
// address: 0x1006081a8
// body: available
// range: 0x1006081a8-0x1006082d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006081a8(long *param_1,code *param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *param_1;
  lVar1 = 0;
  local_80 = param_3;
  FUN_100608530(0,*(undefined8 *)(lVar3 + 0x78));
  lVar9 = *(long *)(lVar1 + -8);
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_78 + (-8 - uVar2);
  lVar8 = (long)puVar7 - uVar2;
  lVar4 = *(long *)(lVar3 + 0x80);
  _swift_beginAccess((long)param_1 + lVar4,auStack_78,0,0);
  pcVar5 = *(code **)(lVar9 + 0x10);
  (*pcVar5)(lVar8,(long)param_1 + lVar4,lVar1);
  lVar3 = lVar8;
  _swift_getEnumCaseMultiPayload(lVar8,lVar1);
  if ((int)lVar3 == 1) {
    *param_4 = 1;
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
  }
  else {
    pcVar6 = *(code **)(lVar9 + 8);
    (*pcVar6)(lVar8,lVar1);
    (*pcVar5)(puVar7,(long)param_1 + lVar4,lVar1);
    (*param_2)(puVar7);
    (*pcVar6)(puVar7,lVar1);
  }
  return;
}

