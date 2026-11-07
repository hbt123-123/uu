// rea decompile_all
// name: FUN_10050e350
// address: 0x10050e350
// body: available
// range: 0x10050e350-0x10050e46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050e350(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 local_70 [8];
  long local_68;
  long local_60;
  undefined8 local_58;
  
  puVar7 = (undefined8 *)(unaff_x20 + 8);
  puVar5 = (undefined2 *)*puVar7;
  *puVar5 = 0x100b;
  *puVar7 = puVar5 + 1;
  thunk_FUN_100507c64(param_2);
  puVar6 = (undefined1 *)*puVar7;
  *puVar6 = 0x1a;
  *puVar7 = puVar6 + 1;
  FUN_100537888(param_3,param_4);
  if (unaff_x21 == 0) {
    thunk_FUN_100507c64();
    lVar1 = *(long *)(unaff_x20 + 8);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
    FUN_100507bf8(lVar1,uVar4,*(undefined8 *)(unaff_x20 + 0x18));
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e468);
      (*pcVar2)();
    }
    local_70[0] = *unaff_x20;
    local_68 = lVar3;
    local_60 = lVar3;
    local_58 = uVar4;
    (**(code **)(param_4 + 0x48))(local_70,&DAT_1009ce770,&PTR_PTR_1009ce788,param_3,param_4);
    if (local_60 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e46c);
      (*pcVar2)();
    }
    puVar6 = (undefined1 *)(lVar1 + (local_68 - local_60));
    *puVar6 = 0xc;
    *puVar7 = puVar6 + 1;
  }
  return;
}

