// rea decompile_all
// name: FUN_1000a8924
// address: 0x1000a8924
// body: available
// range: 0x1000a8924-0x1000a8983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a8980 to 0x1000c2840 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a8924(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *(undefined8 *)((long)pvVar1 + 0x248) = *(undefined8 *)((long)pvVar1 + 0x178);
  *(undefined8 *)((long)pvVar1 + 0x240) = *(undefined8 *)((long)pvVar1 + 0x170);
  *(undefined8 *)((long)pvVar1 + 600) = *(undefined8 *)((long)pvVar1 + 0x188);
  *(undefined8 *)((long)pvVar1 + 0x250) = *(undefined8 *)((long)pvVar1 + 0x180);
  *(undefined8 *)((long)pvVar1 + 0x268) = *(undefined8 *)((long)pvVar1 + 0x198);
  *(undefined8 *)((long)pvVar1 + 0x260) = *(undefined8 *)((long)pvVar1 + 400);
  *(undefined8 *)((long)pvVar1 + 0x208) = *(undefined8 *)((long)pvVar1 + 0x138);
  *(undefined8 *)((long)pvVar1 + 0x200) = *(undefined8 *)((long)pvVar1 + 0x130);
  *(undefined8 *)((long)pvVar1 + 0x218) = *(undefined8 *)((long)pvVar1 + 0x148);
  *(undefined8 *)((long)pvVar1 + 0x210) = *(undefined8 *)((long)pvVar1 + 0x140);
  *(undefined8 *)((long)pvVar1 + 0x228) = *(undefined8 *)((long)pvVar1 + 0x158);
  *(undefined8 *)((long)pvVar1 + 0x220) = *(undefined8 *)((long)pvVar1 + 0x150);
  *(undefined8 *)((long)pvVar1 + 0x238) = *(undefined8 *)((long)pvVar1 + 0x168);
  *(undefined8 *)((long)pvVar1 + 0x230) = *(undefined8 *)((long)pvVar1 + 0x160);
  *(undefined8 *)((long)pvVar1 + 0x1c8) = *(undefined8 *)((long)pvVar1 + 0xf8);
  *(undefined8 *)((long)pvVar1 + 0x1c0) = *(undefined8 *)((long)pvVar1 + 0xf0);
  *(undefined8 *)((long)pvVar1 + 0x1d8) = *(undefined8 *)((long)pvVar1 + 0x108);
  *(undefined8 *)((long)pvVar1 + 0x1d0) = *(undefined8 *)((long)pvVar1 + 0x100);
  *(undefined8 *)((long)pvVar1 + 0x1e8) = *(undefined8 *)((long)pvVar1 + 0x118);
  *(undefined8 *)((long)pvVar1 + 0x1e0) = *(undefined8 *)((long)pvVar1 + 0x110);
  *(undefined8 *)((long)pvVar1 + 0x1f8) = *(undefined8 *)((long)pvVar1 + 0x128);
  *(undefined8 *)((long)pvVar1 + 0x1f0) = *(undefined8 *)((long)pvVar1 + 0x120);
  *(undefined8 *)((long)pvVar1 + 0x1a8) = *(undefined8 *)((long)pvVar1 + 0xd8);
  *(undefined8 *)((long)pvVar1 + 0x1a0) = *(undefined8 *)((long)pvVar1 + 0xd0);
  *(undefined8 *)((long)pvVar1 + 0x1b8) = *(undefined8 *)((long)pvVar1 + 0xe8);
  *(undefined8 *)((long)pvVar1 + 0x1b0) = *(undefined8 *)((long)pvVar1 + 0xe0);
  FUN_10008efb4((long)pvVar1 + 0x1a0);
  _free(pvVar1);
  return;
}

