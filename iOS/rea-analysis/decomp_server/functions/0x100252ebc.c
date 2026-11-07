// rea decompile_all
// name: FUN_100252ebc
// address: 0x100252ebc
// body: available
// range: 0x100252ebc-0x100253017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100252ebc(ulong param_1,Bytef *param_2,uInt param_3)

{
  uint uVar1;
  uint uVar2;
  uLong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar6 = 0xffffff9a;
  }
  else {
    uVar3 = _crc32(*(uLong *)(param_1 + 0x10158),param_2,param_3);
    ((z_streamp)(param_1 + 0x90))->next_in = param_2;
    *(uLong *)(param_1 + 0x10158) = uVar3;
    *(uInt *)(param_1 + 0x98) = param_3;
    do {
      if (*(int *)(param_1 + 0x98) == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0xb0);
      if (uVar2 == 0) {
        uVar6 = param_1;
        FUN_100253018();
        uVar2 = 0x10000;
        *(undefined4 *)(param_1 + 0xb0) = 0x10000;
        *(ulong *)(param_1 + 0xa8) = param_1 + 0x14c;
        if ((int)uVar6 == -1) {
          return uVar6;
        }
      }
      if ((*(int *)(param_1 + 0x144) == 8) && (*(int *)(param_1 + 0x148) == 0)) {
        iVar7 = *(int *)(param_1 + 0xb8);
        uVar2 = _deflate((z_streamp)(param_1 + 0x90),0);
        uVar6 = (ulong)uVar2;
        uVar4 = *(int *)(param_1 + 0xb8) - iVar7;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x98);
        uVar4 = uVar1;
        if (uVar2 <= uVar1) {
          uVar4 = uVar2;
        }
        uVar5 = (ulong)uVar4;
        iVar7 = 0;
        if (uVar1 != 0) {
          uVar6 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0xa8) + uVar6) =
                 *(undefined1 *)(*(long *)(param_1 + 0x90) + uVar6);
            uVar6 = uVar6 + 1;
          } while (uVar5 != uVar6);
          iVar7 = *(int *)(param_1 + 0x98);
          uVar2 = *(uint *)(param_1 + 0xb0);
        }
        uVar6 = 0;
        *(uint *)(param_1 + 0x98) = iVar7 - uVar4;
        *(uint *)(param_1 + 0xb0) = uVar2 - uVar4;
        *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + uVar5;
        *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + uVar5;
        *(ulong *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + uVar5;
        *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + uVar5;
      }
      *(uint *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + uVar4;
    } while ((int)uVar6 == 0);
  }
  return uVar6;
}

