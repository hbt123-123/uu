// rea decompile_all
// name: FUN_10069f5c4
// address: 0x10069f5c4
// body: available
// range: 0x10069f5c4-0x10069f843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069f840 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069f5c4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  long local_538;
  char local_530;
  long local_528;
  char local_520;
  char acStack_518 [728];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((*(long *)(param_1 + 0x668) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x668) + 8) + 0x19) & 1) == 0)) {
    FUN_1006a12bc();
  }
  if ((*(long *)(param_1 + 0x670) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x670) + 8) + 0x19) & 1) == 0)) {
    FUN_1006a12bc();
  }
  if ((*(long *)(param_1 + 0x678) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x678) + 8) + 0x19) & 1) == 0)) {
    FUN_1006a12bc();
  }
  plVar2 = *(long **)(param_1 + 0x668);
  *(undefined8 *)(param_1 + 0x668) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x670) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x678);
  *(undefined8 *)(param_1 + 0x678) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((*(byte *)(param_1 + 0x1b1) & 1) == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    local_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    FUN_1006a132c();
    _bzero(acStack_518,0x2d8);
    _snprintf(acStack_518,0x2d8,"$$$$$$$$$$Aug 19 2026$$$10:14:02$$$$$$$$$$%s\n");
    FUN_1006a05cc(param_1,0,acStack_518);
    *(undefined1 *)(param_1 + 0x1b1) = 1;
    FUN_1006a0c98(param_1 + 0x1b8,0);
    if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0x19) & 1) == 0) {
      FUN_1006a140c(param_1 + 0x98);
    }
    local_528 = param_1 + 0xf0;
    local_520 = '\0';
    FUN_100696f64(&local_528);
    iVar1 = (int)param_1 + 0x88;
    FUN_10069ed60();
    if (iVar1 == 0) {
      pvVar4 = *(void **)(param_1 + 0x78);
      if (pvVar4 != (void *)0x0) {
        FUN_1006a88b8();
        FUN_100692ca0();
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
      }
    }
    else {
      uVar3 = param_1 + 0x88;
      FUN_10069eda0();
      if ((uVar3 & 1) == 0) {
        FUN_10069edac(param_1 + 0x88);
        pvVar4 = (void *)(param_1 + 0x88);
        FUN_10069edc4();
        _bzero(pvVar4,0x25800);
      }
      FUN_10069284c(param_1 + 0x80);
    }
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 8))();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    FUN_1006972a0(&local_528);
    local_538 = param_1 + 0x148;
    local_530 = '\0';
    FUN_100696f64(&local_538);
    if (*(FILE **)(param_1 + 0x1a0) != (FILE *)0x0) {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      _fclose(*(FILE **)(param_1 + 0x1a0));
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    if (local_530 == '\x01') {
      FUN_1006972a0(&local_538);
    }
    if (local_520 == '\x01') {
      FUN_1006972a0(&local_528);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

