// rea decompile_all
// name: FUN_100577aac
// address: 0x100577aac
// body: available
// range: 0x100577aac-0x100577ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100577aac(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  FUN_1005a7f54();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}

