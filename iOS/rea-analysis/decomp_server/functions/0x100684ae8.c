// rea decompile_all
// name: FUN_100684ae8
// address: 0x100684ae8
// body: available
// range: 0x100684ae8-0x100684bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100684ae8(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined auStack_c0 [80];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  
  puVar3 = auStack_c0;
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_50 = unaff_x20[4];
  uStack_48 = (undefined7)unaff_x20[5];
  uStack_41 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  FUN_100683cbc();
  if (param_1 == (undefined *)0x0) {
    FUN_10068e548(&local_70);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar2 = param_1;
    FUN_10068c954();
    FUN_10068e538(&local_70,auStack_c0);
    FUN_10068d970(auStack_c0,puVar2 + 0x20,param_1);
    FUN_100040bb4(auStack_c0,&DAT_100ab9f70,&DAT_10084d8a0);
    if (puVar3 != param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100684bac);
      (*pcVar1)();
    }
    FUN_10068e548(&local_70);
  }
  return puVar2;
}

