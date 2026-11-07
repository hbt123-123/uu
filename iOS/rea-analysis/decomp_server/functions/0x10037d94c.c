// rea decompile_all
// name: FUN_10037d94c
// address: 0x10037d94c
// body: available
// range: 0x10037d94c-0x10037dbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037dbb0 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010037db20) */
/* WARNING: Removing unreachable block (ram,0x00010037db30) */

void FUN_10037d94c(long *param_1,char *param_2)

{
  undefined8 ******ppppppuVar1;
  ulong uVar2;
  void *pvVar3;
  void **ppvVar4;
  logic_error *this;
  size_t sVar5;
  undefined8 *****local_118 [2];
  char local_101;
  undefined8 *****local_100 [2];
  char local_e9;
  void *local_e8 [2];
  char local_d1;
  void *local_d0;
  void *pvStack_c8;
  void *local_c0;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  void *local_90;
  void *pvStack_88;
  void *local_80;
  void *local_70;
  void *pvStack_68;
  void *local_60;
  void *local_50;
  void *pvStack_48;
  void *local_40;
  
  if (*param_2 == '\0') {
    uVar2 = param_1[2];
    sVar5 = (size_t)(byte)param_2[1];
    if ((ulong)param_1[1] < uVar2 + sVar5) goto LAB_10037d9f0;
    pvVar3 = (void *)(*param_1 + uVar2);
    param_2 = param_2 + 2;
  }
  else {
    uVar2 = param_1[2];
    sVar5 = *(size_t *)(param_2 + 2);
    if ((ulong)param_1[1] < uVar2 + sVar5) {
LAB_10037d9f0:
      std::to_string(uVar2);
      ppvVar4 = local_e8;
      std::string::insert((ulong)ppvVar4,(char *)0x0);
      pvStack_c8 = ppvVar4[1];
      local_d0 = *ppvVar4;
      local_c0 = ppvVar4[2];
      ppvVar4[1] = (void *)0x0;
      ppvVar4[2] = (void *)0x0;
      *ppvVar4 = (void *)0x0;
      ppvVar4 = &local_d0;
      std::string::append((char *)ppvVar4);
      pvStack_a8 = ppvVar4[1];
      local_b0 = *ppvVar4;
      local_a0 = ppvVar4[2];
      ppvVar4[1] = (void *)0x0;
      ppvVar4[2] = (void *)0x0;
      *ppvVar4 = (void *)0x0;
      std::to_string(sVar5);
      ppppppuVar1 = (undefined8 ******)local_100[0];
      if (-1 < local_e9) {
        ppppppuVar1 = local_100;
      }
      ppvVar4 = &local_b0;
      std::string::append((char *)ppvVar4,(ulong)ppppppuVar1);
      pvStack_88 = ppvVar4[1];
      local_90 = *ppvVar4;
      local_80 = ppvVar4[2];
      ppvVar4[1] = (void *)0x0;
      ppvVar4[2] = (void *)0x0;
      *ppvVar4 = (void *)0x0;
      ppvVar4 = &local_90;
      std::string::append((char *)ppvVar4);
      pvStack_68 = ppvVar4[1];
      local_70 = *ppvVar4;
      local_60 = ppvVar4[2];
      ppvVar4[1] = (void *)0x0;
      ppvVar4[2] = (void *)0x0;
      *ppvVar4 = (void *)0x0;
      std::to_string(param_1[1]);
      ppppppuVar1 = (undefined8 ******)local_118[0];
      if (-1 < local_101) {
        ppppppuVar1 = local_118;
      }
      ppvVar4 = &local_70;
      std::string::append((char *)ppvVar4,(ulong)ppppppuVar1);
      pvStack_48 = ppvVar4[1];
      local_50 = *ppvVar4;
      local_40 = ppvVar4[2];
      ppvVar4[1] = (void *)0x0;
      ppvVar4[2] = (void *)0x0;
      *ppvVar4 = (void *)0x0;
      if (local_101 < '\0') {
        operator_delete(local_118[0]);
      }
      if (local_e9 < '\0') {
        operator_delete(local_100[0]);
      }
      if ((long)local_a0 < 0) {
        operator_delete(local_b0);
      }
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
      }
      if (local_d1 < '\0') {
        operator_delete(local_e8[0]);
      }
      this = (logic_error *)0x10;
      ___cxa_allocate_exception();
      std::logic_error::logic_error(this,(string *)this);
      *(undefined **)this = PTR_vtable_1009951c8 + 0x10;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this,PTR_typeinfo_1009965b8,PTR__out_of_range_1009950f0);
    }
    pvVar3 = (void *)(*param_1 + uVar2);
    param_2 = *(char **)(param_2 + 10);
  }
  _memcpy(pvVar3,param_2,sVar5);
  param_1[2] = param_1[2] + sVar5;
  return;
}

