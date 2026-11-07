// rea decompile_all
// name: FUN_1007bd064
// address: 0x1007bd064
// body: available
// range: 0x1007bd064-0x1007bd46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bd1a8) */
/* WARNING: Removing unreachable block (ram,0x0001007bd174) */
/* WARNING: Removing unreachable block (ram,0x0001007bd368) */
/* WARNING: Removing unreachable block (ram,0x0001007bd2d8) */
/* WARNING: Removing unreachable block (ram,0x0001007bd344) */
/* WARNING: Removing unreachable block (ram,0x0001007bd388) */

void FUN_1007bd064(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  local_a8 = param_1;
  __s10Foundation4DateVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lVar6 = (long)&local_d0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100abc950;
  local_a0 = lVar3;
  FUN_1007b4550();
  lVar5 = lVar6 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __ss13DecodingErrorO7ContextVMa();
  lVar7 = *(long *)(lVar3 + -8);
  lVar3 = *(long *)(lVar7 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  __ss7DecoderP20singleValueContainers06Singlec8DecodingD0_pyKFTj(auStack_88,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_d0 = lVar6;
    local_c8 = lVar5;
    local_c0 = lVar5 - (lVar3 + 0xfU & 0xfffffffffffffff0);
    local_b8 = lVar7;
    FUN_10003f030(auStack_88,local_70);
    __ss28SingleValueDecodingContainerP6decodeyS2dmKFTj(local_70,uStack_68);
    __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(local_a8);
    FUN_10003f094(auStack_88);
  }
  return;
}

