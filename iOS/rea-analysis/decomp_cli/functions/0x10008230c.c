// rea decompile_all
// name: FUN_10008230c
// address: 0x10008230c
// body: available
// range: 0x10008230c-0x10008245f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008230c(ulong param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  uVar1 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar1 <= uVar4) || ((param_3 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if (uVar4 < uVar1) {
        FUN_100082720();
        goto LAB_1000823f4;
      }
      FUN_100082c40(uVar4 + 1);
    }
    else {
      FUN_100083280(uVar4 + 1);
    }
    lVar5 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    param_2 = param_1;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0
       ) {
      do {
        if (*(ulong *)(*(long *)(lVar5 + 0x30) + param_2 * 8) == param_1) {
          FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100082460);
          (*pcVar2)();
        }
        param_2 = param_2 + 1 & ~uVar4;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) &
               1) != 0);
    }
  }
LAB_1000823f4:
  lVar3 = *unaff_x20;
  lVar5 = lVar3 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar3 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100082444);
  (*pcVar2)();
}

