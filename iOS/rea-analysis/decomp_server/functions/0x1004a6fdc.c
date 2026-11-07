// rea decompile_all
// name: FUN_1004a6fdc
// address: 0x1004a6fdc
// body: available
// range: 0x1004a6fdc-0x1004a708b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a6fdc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(unaff_x20 + 0xc) == '\a') {
    uVar5 = unaff_x20[4];
    puVar3 = (undefined *)unaff_x20[2];
    uVar1 = unaff_x20[3];
    uVar2 = *unaff_x20;
    uVar4 = unaff_x20[1];
    FUN_100481f28(uVar2,uVar4,puVar3,uVar1,uVar5,unaff_x20[5],unaff_x20[6],unaff_x20[7],unaff_x20[8]
                  ,unaff_x20[9],unaff_x20[10],unaff_x20[0xb],7);
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    uVar5 = 0xc000000000000000;
    uVar4 = 0xe000000000000000;
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = puVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar5;
  return;
}

