// rea decompile_all
// name: FUN_100694228
// address: 0x100694228
// body: available
// range: 0x100694228-0x1006942eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100694228(undefined8 *param_1,undefined8 *param_2,locale *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  locale *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [15];
  undefined1 local_39;
  undefined1 *local_38;
  
  std::locale::locale(param_3);
  uVar1 = param_1[1];
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  local_39 = 0;
  plVar4 = (locale *)((long)puVar6 + (long)param_3);
  local_38 = auStack_48;
  FUN_100694f94(plVar4,(long)puVar6 + uVar1,puVar3,(long)puVar3 + uVar2,&local_38,&local_39,
                &local_39);
  lVar5 = (long)*(char *)((long)param_1 + 0x17);
  puVar6 = param_1;
  if (lVar5 < 0) {
    puVar6 = (undefined8 *)*param_1;
    lVar5 = param_1[1];
  }
  if ((locale *)((long)puVar6 + lVar5) == plVar4) {
    lVar5 = -1;
  }
  else {
    lVar5 = (long)plVar4 - (long)puVar6;
  }
  std::locale::~locale(param_3);
  return lVar5;
}

