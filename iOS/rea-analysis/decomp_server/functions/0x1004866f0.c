// rea decompile_all
// name: FUN_1004866f0
// address: 0x1004866f0
// body: available
// range: 0x1004866f0-0x1004867af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004866f0(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[6];
  if ((((uVar2 & uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar1 >> 0x3b) & 6) != 0 || ((uint)(uVar2 >> 0x3d) & 1) != 0)) {
    uVar6 = 0;
    uVar3 = 0;
    uVar2 = 0xc000000000000000;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar6 = *unaff_x20;
    puVar4 = (undefined *)unaff_x20[1];
    puVar5 = (undefined *)unaff_x20[2];
    uVar3 = unaff_x20[3];
    FUN_1004816e0(uVar6,puVar4,puVar5,uVar3,uVar2,unaff_x20[5],uVar1,unaff_x20[7],unaff_x20[8],
                  unaff_x20[9]);
  }
  *param_1 = (byte)uVar6 & 1;
  *(undefined **)(param_1 + 8) = puVar4;
  *(undefined **)(param_1 + 0x10) = puVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(ulong *)(param_1 + 0x20) = uVar2;
  return;
}

